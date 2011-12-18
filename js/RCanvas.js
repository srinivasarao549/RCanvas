var _canvas = document.createElement('canvas');
_canvas.width = 320;
_canvas.height = 240;

document.body.appendChild(_canvas);

var _ctx = _canvas.getContext('2d');

var _procedures = {
    'save': function(params) {
        console.log('save');

        // ...

        try {
            _ctx.save();
        } catch (e) {
            // ...
        }
    },

    'restore': function(params) {
        console.log('restore');

        // ...

        try {
            _ctx.restore();
        } catch (e) {
            // ...
        }
    },

    'scale': function(params) {
        console.log('scale: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.scale(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'rotate': function(params) {
        console.log('rotate: ' + params[0]);

        // ...

        try {
            _ctx.rotate(params[0]);
        } catch (e) {
            // ...
        }
    },

    'translate': function(params) {
        console.log('translate: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.translate(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'transform': function(params) {
        console.log('transform: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3] + ',' + params[4] + ',' + params[5]);

        // ...

        try {
            _ctx.transform(params[0], params[1], params[2], params[3],
                params[4], params[5]);
        } catch (e) {
            // ...
        }
    },

    'setTransform': function(params) {
        console.log('setTransform: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3] + ',' + params[4] + ',' + params[5]);

        // ...

        try {
            _ctx.setTransform(params[0], params[1], params[2], params[3],
                params[4], params[5]);
        } catch (e) {
            // ...
        }
    },

    'createLinearGradient': function(params) {
        console.log('createLinearGradient: ' + params[0] + ',' + params[1] +
            ',' + params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.createLinearGradient(params[0], params[1], params[2],
                params[3]);
        } catch (e) {
            // ...
        }
    },

    'createRadialGradient': function(params) {
        console.log('createRadialGradient: ' + params[0] + ',' + params[1] +
            ',' + params[2] + ',' + params[3] + ',' + params[4] + ',' +
            params[5]);

        // ...

        try {
            _ctx.createRadialGradient(params[0], params[1], params[2],
                params[3], params[4], params[5]);
        } catch (e) {
            // ...
        }
    },

    'createPattern': function(params) {
        console.log('createPattern: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.createPattern(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'clearRect': function(params) {
        console.log('clearRect: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.clearRect(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'fillRect': function(params) {
        console.log('fillRect: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.fillRect(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'strokeRect': function(params) {
        console.log('strokeRect: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.strokeRect(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'beginPath': function(params) {
        console.log('beginPath');

        // ...

        try {
            _ctx.beginPath();
        } catch (e) {
            // ...
        }
    },

    'closePath': function(params) {
        console.log('closePath');

        // ...

        try {
            _ctx.closePath();
        } catch (e) {
            // ...
        }
    },

    'moveTo': function(params) {
        console.log('moveTo: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.moveTo(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'lineTo': function(params) {
        console.log('lineTo: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.lineTo(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'quadraticCurveTo': function(params) {
        console.log('quadraticCurveTo: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.quadraticCurveTo(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'bezierCurveTo': function(params) {
        console.log('bezierCurveTo: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3] + ',' + params[4] + ',' + params[5]);

        // ...

        try {
            _ctx.bezierCurveTo(params[0], params[1], params[2], params[3],
                params[4], params[5]);
        } catch (e) {
            // ...
        }
    },

    'arcTo': function(params) {
        console.log('arcTo: ' + params[0] + ',' + params[1] + ',' + params[2] +
            ',' + params[3] + ',' + params[4]);

        // ...

        try {
            _ctx.arcTo(params[0], params[1], params[2], params[3], params[4]);
        } catch (e) {
            // ...
        }
    },

    'rect': function(params) {
        console.log('rect: ' + params[0] + ',' + params[1] + ',' + params[2] +
            ',' + params[3]);

        // ...

        try {
            _ctx.rect(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'arc': function(params) {
        console.log('arc: ' + params[0] + ',' + params[1] + ',' + params[2] +
            ',' + params[3] + ',' + params[4] + ',' + params[5]);

        // ...

        try {
            _ctx.arc(params[0], params[1], params[2], params[3], params[4],
                params[5]);
        } catch (e) {
            // ...
        }
    },

    'fill': function(params) {
        console.log('fill');

        // ...

        try {
            _ctx.fill();
        } catch (e) {
            // ...
        }
    },

    'stroke': function(params) {
        console.log('stroke');

        // ...

        try {
            _ctx.stroke();
        } catch (e) {
            // ...
        }
    },

    'drawSystemFocusRing': function(params) {
        console.log('drawSystemFocusRing: ' + params[0]);

        // ...

        try {
            _ctx.drawSystemFocusRing(params[0]);
        } catch (e) {
            // ...
        }
    },

    'drawCustomFocusRing': function(params) {
        console.log('drawCustomFocusRing: ' + params[0]);

        // ...

        try {
            _ctx.drawCustomFocusRing(params[0]);
        } catch (e) {
            // ...
        }
    },

    'scrollPathIntoView': function(params) {
        console.log('scrollPathIntoView');

        // ...

        try {
            _ctx.scrollPathIntoView();
        } catch (e) {
            // ...
        }
    },

    'clip': function(params) {
        console.log('clip');

        // ...

        try {
            _ctx.clip();
        } catch (e) {
            // ...
        }
    },

    'isPointInPath': function(params) {
        console.log('isPointInPath: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.isPointInPath(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'fillText': function(params) {
        console.log('fillText: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.fillText(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'strokeText': function(params) {
        console.log('strokeText: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.strokeText(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'measureText': function(params) {
        console.log('measureText: ' + params[0]);

        // ...

        try {
            _ctx.measureText(params[0]);
        } catch (e) {
            // ...
        }
    },

    'drawImage': function(params) {
        console.log('drawImage: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3] + ',' + params[4] + ',' + params[5] +
            ',' + params[6] + ',' + params[7] + ',' + params[8]);

        // ...

        try {
            _ctx.drawImage(params[0], params[1], params[2], params[3],
                params[4], params[5], params[6], params[7], params[8]);
        } catch (e) {
            // ...
        }
    },

    'createImageData': function(params) {
        console.log('createImageData: ' + params[0] + ',' + params[1]);

        // ...

        try {
            _ctx.createImageData(params[0], params[1]);
        } catch (e) {
            // ...
        }
    },

    'getImageData': function(params) {
        console.log('getImageData: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3]);

        // ...

        try {
            _ctx.getImageData(params[0], params[1], params[2], params[3]);
        } catch (e) {
            // ...
        }
    },

    'putImageData': function(params) {
        console.log('putImageData: ' + params[0] + ',' + params[1] + ',' +
            params[2] + ',' + params[3] + ',' + params[4] + ',' + params[5] +
            ',' + params[6]);

        // ...

        try {
            _ctx.putImageData(params[0], params[1], params[2], params[3],
                params[4], params[5], params[6]);
        } catch (e) {
            // ...
        }
    }
};

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
// ...
