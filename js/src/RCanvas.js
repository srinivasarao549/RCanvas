// At the moment, RCanvas expects the context.  Open to change later
function RCanvas(context){
    this._context = context;
}

RCanvas.prototype = {

    handleMessage: function(msg, socket){
        var rpc = JSON.parse(msg),
            result, 
            response = {
                id: rpc.id,
                error: null,
                result: null
            }

        try {

            result =   this._context[rpc.method]
                            .apply(this._context, rpc.params);
        
            if ( this._socket && rpc.id !== null) {
            
                response.result = result;
                this._socket.send(JSON.stringify(response));
            
            }
        
        } catch(e) {

            if ( this._socket && rpc.id !== null) {
                
                response.error = e;
                this._socket.send(JSON.stringify(response));
            
            } else {
                throw e
            }
        
        }
    },

    bindSocket: function(socket){
        this._socket = socket;
        socket.onmessage = this.handleMessage.bind(this);
    }

}
