## RCanvas on the clientside


### Basic setup

RCanvas' clientside implementation forms a simple wrapper around a context object, passed as part of the constructor:

```javascript
    var canvas = document.createElement('canvas'),
        context = canvas.getContext('2d'),
        r_canvas = new RCanvas(context);

```

After that, simply bind the websocket that's receiving RCanvas data from the server:

```javascript

    // assuming ws is our websocket connecting to RCanvas
    r_canvas.bindSocket(ws);

```

r_canvas will handle JSON-RPC notifications and method calls (with successes and errors handled [as per the spec](http://json-rpc.org/wiki/specification))
