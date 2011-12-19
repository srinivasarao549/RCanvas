describe("RCanvas client-side lib", function(){

    describe("bindSocket", function(){
        
        it("must bind this.handleMessage to socket onMethod", function(){
            var r_canvas = new RCanvas({}),
                r_canvas_ref = null,
                r_canvas_arguments = [],
                ws = {}

            r_canvas.handleMessage = function(){
                r_canvas_ref = this
                r_canvas_arguments = [].slice.call(arguments, 0)
            }
        
            r_canvas.bindSocket(ws);
            ws.onmessage(1, 2, 3);

            expect(r_canvas_ref).toBe(r_canvas);
            expect(r_canvas_arguments).toEqual([1, 2, 3])
        })
    })

    describe('handleMessage general', function(){
    
        it("must apply an RPC call to its stored context", function(){
            
            var args = [],
                mock_context = {transform: function(){ args = arguments }},

                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6],"id":1}';

            r_canvas.handleMessage(rpc);
            
            expect(args).toEqual([1, 2, 3, 4, 5, 6]);

        })
    
    })
    
    // TODO
    describe("handleMessage w/ socket bound", function(){
    
        it("must send back info success IF id NOT null", function(){
            
            var ws_response = null,
                mock_context = {transform: function(){return 1}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6],"id":1}',
                ws = {send: function(msg){ ws_response = msg}};

            r_canvas.bindSocket(ws);
            r_canvas.handleMessage(rpc);
            
            expect(JSON.parse(ws_response).error).toEqual(null);
            expect(JSON.parse(ws_response).id).toEqual(1);
            expect(JSON.parse(ws_response).result).toNotEqual(null);
        })

        it("must not send back info success If id IS null", function(){
              var ws_response = null,
                mock_context = {transform: function(){}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6], "id": null}',
                ws = {send: function(msg){ ws_response = msg}};

            r_canvas.bindSocket(ws);
            r_canvas.handleMessage(rpc);
            
            expect(ws_response).toEqual(null);

        })

        it("must send back info on error", function(){
              var ws_response = null,
                mock_context = {transform: function(){}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"NOTTRANSFORM","params":[1,2,3,4,5,6],"id":1}',
                ws = {send: function(msg){ ws_response = msg }}

            r_canvas.bindSocket(ws);
            r_canvas.handleMessage(rpc);
            
            expect(JSON.parse(ws_response).result).toEqual(null);
            expect(JSON.parse(ws_response).id).toEqual(1);
            expect(JSON.parse(ws_response).error).toNotEqual(null); // incomplete test

        
        })

    })

    describe("handleMessage w/o socket bound", function(){
    
        it("must throw error on error", function(){
            var mock_context = {transform: function(){}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"NOTTRANSFORM","params":[1,2,3,4,5,6],"id":1}',
                e = null;

            try {
                r_canvas.handleMessage(rpc);
            } catch (e) {
                expect(e instanceof Error).toBeTruthy();
            }
        })
    
    })
})
