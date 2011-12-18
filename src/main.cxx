#include <cstring>

using namespace std;

#include "CanvasRenderingContext2D.hh"

int main(int argc, char *argv[])
{
    HTMLCanvasElement *canvas = new HTMLCanvasElement();

    (void) canvas->toDataURL();
    (void) canvas->toDataURL(new DOMString(), NULL);

    canvas->toBlob(new FileCallback());
    canvas->toBlob(new FileCallback(), new DOMString(), NULL);

    CanvasRenderingContext2D* ctx =
        (CanvasRenderingContext2D*) canvas->getContext(new DOMString(), NULL);

    ctx->save();
    ctx->restore();

    ctx->scale(1, 1);
    ctx->rotate(1);
    ctx->translate(1, 1);
    ctx->transform(1, 2, 3, 4, 5, 6);
    ctx->setTransform(1, 2, 3, 4, 5, 6);

    CanvasGradient* gradient = ctx->createLinearGradient(1, 1, 2, 2);
    gradient->addColorStop(0, new DOMString());
    (void) ctx->createRadialGradient(1, 1, 1, 2, 2, 2);
    (void) ctx->createPattern(new HTMLImageElement(), new DOMString());
    (void) ctx->createPattern(new HTMLCanvasElement(), new DOMString());
    (void) ctx->createPattern(new HTMLVideoElement(), new DOMString());

    ctx->clearRect(0, 0, 1, 1);
    ctx->fillRect(0, 0, 1, 1);
    ctx->strokeRect(0, 0, 1, 1);

    ctx->beginPath();
    ctx->closePath();
    ctx->moveTo(0, 0);
    ctx->lineTo(0, 0);
    ctx->quadraticCurveTo(0, 0, 1, 1);
    ctx->bezierCurveTo(0, 0, 1, 1, 2, 2);
    ctx->arcTo(0, 0, 1, 1, 2);
    ctx->rect(0, 0, 1, 1);
    ctx->arc(1, 2, 3, 4, 5);
    ctx->arc(1, 2, 3, 4, 5, true);
    ctx->fill();
    ctx->stroke();
    ctx->drawSystemFocusRing(new Element());
    (void) ctx->drawCustomFocusRing(new Element());
    ctx->scrollPathIntoView();
    ctx->clip();
    ctx->isPointInPath(0, 0);

    ctx->fillText(new DOMString(), 0, 0);
    ctx->fillText(new DOMString(), 0, 0, 1);
    ctx->strokeText(new DOMString(), 0, 0);
    ctx->strokeText(new DOMString(), 0, 0, 1);
    (void) ctx->measureText(new DOMString());

    ctx->drawImage(new HTMLImageElement(), 0, 0);
    ctx->drawImage(new HTMLImageElement(), 0, 0, 1, 1);
    ctx->drawImage(new HTMLImageElement(), 0, 0, 1, 1, 2, 2, 3, 3);
    ctx->drawImage(new HTMLCanvasElement(), 0, 0);
    ctx->drawImage(new HTMLCanvasElement(), 0, 0, 1, 1);
    ctx->drawImage(new HTMLCanvasElement(), 0, 0, 1, 1, 2, 2, 3, 3);
    ctx->drawImage(new HTMLVideoElement(), 0, 0);
    ctx->drawImage(new HTMLVideoElement(), 0, 0, 1, 1);
    ctx->drawImage(new HTMLVideoElement(), 0, 0, 1, 1, 2, 2, 3, 3);

    (void) ctx->createImageData(4, 4);
    (void) ctx->createImageData(new ImageData());
    (void) ctx->getImageData(0, 0, 1, 1);
    ctx->putImageData(new ImageData(), 0, 0);
    ctx->putImageData(new ImageData(), 0, 0, 1, 1, 2, 2);

    delete gradient;
    delete ctx;
    delete canvas;
    return 0;
}
