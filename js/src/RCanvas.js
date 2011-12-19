
// At the moment, RCanvas expects the 2d context.  Open to change later
function RCanvas(context){
    this._context = context;
}

RCanvas.prototype = {

    handleMessage: function(msg){
        var rpc = JSON.parse(msg);

        try {

            this._context[rpc.method]
                .apply(this._context, rpc.params);
            //... send success?
        
        } catch(e) {
        
            //... handle error
        
        }
    }

}
