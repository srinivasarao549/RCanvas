(function(){

    // create test canvas
    var _canvas = document.createElement('canvas'),
        _context = _canvas.getContext("2d");

    _canvas.width = 320;
    _canvas.height = 240;
    document.body.appendChild(_canvas);

    var _ws = {};
    _ws.onmessage = function(msg) {
        var rpc = JSON.parse(msg);

        if (typeof rpc.method === 'string' && typeof _procedures[rpc.method] ===
            'function') {
            _procedures[rpc.method](rpc.params);
        }
    };

    _ws.onmessage('{"method":"save","params":null,"id":1}');
    _ws.onmessage('{"method":"restore","params":null,"id":1}');
    _ws.onmessage('{"method":"scale","params":[1,2],"id":1}');
    _ws.onmessage('{"method":"rotate","params":[1],"id":1}');
    _ws.onmessage('{"method":"translate","params":[1,1],"id":1}');
    _ws.onmessage('{"method":"transform","params":[1,2,3,4,5,6],"id":1}');


})()
