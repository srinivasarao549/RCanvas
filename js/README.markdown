## RCanvas on the clientside


### Basic setup

RCanvas' clientside implementation forms a simple wrapper around a context object, passed as part of the constructor:

```javascript
    var canvas = document.createElement('canvas'),
        context = canvas.getContext('2d'),
        r_canvas = new RCanvas(context);

```

### handleMessage

In the most basic usage, r_canvas has a handleMessage method, which can be used to accept JSON-RPC messages, and manipulate it's context on that basis:

```javascript
    // this:
    r_canvas.handleMessage('{"id": 1, "method": "save", "params": []');

    // is the same as this:
    context.save()
```

This lets us bind to a websocket that's sending data from RCanvas on the serverside, like so:

```javascript

    // assuming ws is our websocket
    ws.onmessage = r_canvas.handleMessage.bind(r_canvas)
    
```

If a method that doesn't exist on context is specified, or another error with the call occurs, handleMessage will throw an error if there is no socket bound (see below):

```javascript
    
    // will throw error
    r_canvas.handleMessage('{"id": 1, "method": "foo", "params": ["bar"]');

```

### binding sockets

In order to allow us to send data back to the socket, it's necessary to bind it to r_canvas. 

```javascript

    // still assuming ws is our socket
    r_canvas.bindSocket(ws)

```

Now, success or error will call ws' send method with the appropriate JSON, unless the original message contained id: null, as per the [the specification](http://json-rpc.org/wiki/specification).
