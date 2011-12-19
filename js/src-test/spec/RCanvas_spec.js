describe("RCanvas client-side lib", function(){

    it("must apply an RPC call to its stored context", function(){
        
        var args = [],
            mock_context = {transform: function(){ args = arguments }},

            r_canvas = new RCanvas(mock_context),
            rpc = '{"method":"transform","params":[1,2,3,4,5,6],"id":1}';

        r_canvas.handleMessage(rpc);
        
        expect(args).toEqual([1, 2, 3, 4, 5, 6]);

    })
    
    // TODO
    it("must return a call on success", function(){})

    it("must return a call on error", function(){})
})
