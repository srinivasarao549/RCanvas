describe("RCanvas client-side lib", function(){

    describe("bindSocket", function(){
        
        it("must apply an RPC call to its stored context onmessage", function(){
            
            var args = [],
                mock_context = {transform: function(){ args = arguments }},
                ws = {onmessage: function(){}, send: function(){}},
                r_canvas = new RCanvas(mock_context).bindSocket(ws),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6],"id":1}';

            ws.onmessage(rpc);
            
            expect(args).toEqual([1, 2, 3, 4, 5, 6]);
        })

        it("must send back info success IF id NOT null onmessage", function(){
            
            var ws_response = null,
                mock_context = {transform: function(){return 1}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6],"id":1}',
                ws = {send: function(msg){ ws_response = msg}};

            r_canvas.bindSocket(ws);
            ws.onmessage(rpc);
            
            expect(JSON.parse(ws_response).error).toEqual(null);
            expect(JSON.parse(ws_response).id).toEqual(1);
            expect(JSON.parse(ws_response).result).toNotEqual(null);
        })

      
        it("must not send back info success If id IS null in onmessage", function(){
              var ws_response = null,
                mock_context = {transform: function(){}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"transform","params":[1,2,3,4,5,6], "id": null}',
                ws = {send: function(msg){ ws_response = msg}};

            r_canvas.bindSocket(ws);
            ws.onmessage(rpc);
            
            expect(ws_response).toEqual(null);

        })

        it("must send back info on error", function(){
              var ws_response = null,
                mock_context = {transform: function(){}},
                r_canvas = new RCanvas(mock_context),
                rpc = '{"method":"NOTTRANSFORM","params":[1,2,3,4,5,6],"id":1}',
                ws = {send: function(msg){ ws_response = msg }}

            r_canvas.bindSocket(ws);
            ws.onmessage(rpc);
            
            expect(JSON.parse(ws_response).result).toEqual(null);
            expect(JSON.parse(ws_response).id).toEqual(1);
            expect(JSON.parse(ws_response).error).toNotEqual(null); // incomplete test

        })

    })
  
})
