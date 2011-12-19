// At the moment, RCanvas expects the context.  Open to change later
function RCanvas(context){
    this._context = context;
}

RCanvas.prototype.bindSocket = function(socket){
     
    var context = this._context;

    socket.onmessage = handle_message;
    
    function handle_message(message){
        
        var rpc = JSON.parse(message),
            response = {
                id: rpc.id,
                error: null,
                result: null
            }; 

        try {
            response.result = context[rpc.method].apply(context, rpc.params);
        } catch(e) {
            response.error = e
        }

        // if the JSON-RPC call isn't a notification, send response
        if ( rpc.id !== null ) socket.send(JSON.stringify(response))
    }

}

