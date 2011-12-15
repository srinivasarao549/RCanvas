#include <iostream>

using namespace std;

#include "CanvasRenderingContext2D.hh"

CanvasRenderingContext2D::CanvasRenderingContext2D()
{
    cerr << "CanvasRenderingContext2D()" << endl;

    // ...
}

CanvasRenderingContext2D::~CanvasRenderingContext2D()
{
    cerr << "~CanvasRenderingContext2D()" << endl;

    // ...
}

void CanvasRenderingContext2D::save()
{
    cerr << "save()" << endl;

    // ...
}

void CanvasRenderingContext2D::restore()
{
    cerr << "restore()" << endl;

    // ...
}

void CanvasRenderingContext2D::scale(double x, double y)
{
    cerr << "scale(x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::rotate(double angle)
{
    cerr << "rotate(angle)" << endl;

    // ...
}

void CanvasRenderingContext2D::translate(double x, double y)
{
    cerr << "translate(x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::transform(double a, double b, double c,
    double d, double e, double f)
{
    cerr << "transform(a, b, c, d, e, f)" << endl;

    // ...
}

void CanvasRenderingContext2D::setTransform(double a, double b, double c,
    double d, double e, double f)
{
    cerr << "setTransform(a, b, c, d, e, f)" << endl;

    // ...
}

CanvasGradient* CanvasRenderingContext2D::createLinearGradient(double x0,
    double y0, double x1, double y1)
{
    cerr << "createLinearGradient(x0, y0, x1, y1)" << endl;

    // ...

    return new CanvasGradient();
}

CanvasGradient* CanvasRenderingContext2D::createRadialGradient(double x0,
    double y0, double r0, double x1, double y1, double r1)
{
    cerr << "createRadialGradient(x0, y0, r0, x1, y1, r1)" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(HTMLImageElement* image,
    DOMString* repetition)
{
    cerr << "createPattern([image] image, repetition)" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(
    HTMLCanvasElement* image, DOMString* repetition)
{
    cerr << "createPattern([canvas] image, repetition)" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(HTMLVideoElement* image,
    DOMString* repetition)
{
    cerr << "createPattern([video] image, repetiton)" << endl;

    // ...
}

void CanvasRenderingContext2D::clearRect(double x, double y, double w,
    double h)
{
    cerr << "clearRect(x, y, w, h)" << endl;

    // ...
}

void CanvasRenderingContext2D::fillRect(double x, double y, double w, double h)
{
    cerr << "fillRect(x, y, w, h)" << endl;

    // ...
}

void CanvasRenderingContext2D::strokeRect(double x, double y, double w,
    double h)
{
    cerr << "strokeRect(x, y, w, h)" << endl;

    // ...
}

void CanvasRenderingContext2D::beginPath()
{
    cerr << "beginPath()" << endl;

    // ...
}

void CanvasRenderingContext2D::closePath()
{
    cerr << "closePath()" << endl;

    // ...
}

void CanvasRenderingContext2D::moveTo(double x, double y)
{
    cerr << "moveTo(x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::lineTo(double x, double y)
{
    cerr << "lineTo(x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::quadraticCurveTo(double cpx, double cpy,
    double x, double y)
{
    cerr << "quadraticCurveTo(cpx, cpy, x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::bezierCurveTo(double cp1x, double cp1y,
    double cp2x, double cp2y, double x, double y)
{
    cerr << "bezierCurveTo(cp1x, cp1y, cp2x, cp2y, x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::arcTo(double x1, double y1, double x2,
    double y2, double radius)
{
    cerr << "arcTo(x1, y1, x2, y2, radius)" << endl;

    // ...
}

void CanvasRenderingContext2D::rect(double x, double y, double w, double h)
{
    cerr << "rect(x, y, w, h)" << endl;

    // ...
}

void CanvasRenderingContext2D::arc(double x, double y, double radius,
    double startAngle, double endAngle)
{
    cerr << "arc(x, y, radius, startAngle, endAngle)" << endl;

    // ...
}

void CanvasRenderingContext2D::arc(double x, double y, double radius,
    double startAngle, double endAngle, bool anticlockwise)
{
    cerr << "arc(x, y, radius, startAngle, endAngle, anticlockwise)" << endl;

    // ...
}

void CanvasRenderingContext2D::fill()
{
    cerr << "fill()" << endl;

    // ...
}

void CanvasRenderingContext2D::stroke()
{
    cerr << "stroke()" << endl;

    // ...
}

void CanvasRenderingContext2D::drawSystemFocusRing(Element* element)
{
    cerr << "drawSystemFocusRing(element)" << endl;

    // ...
}

bool CanvasRenderingContext2D::drawCustomFocusRing(Element* element)
{
    cerr << "drawCustomFocusRing(element)" << endl;

    // ...
}

void CanvasRenderingContext2D::scrollPathIntoView()
{
    cerr << "scrollPathIntoView()" << endl;

    // ...
}

void CanvasRenderingContext2D::clip()
{
    cerr << "clip()" << endl;

    // ...
}

bool CanvasRenderingContext2D::isPointInPath(double x, double y)
{
    cerr << "isPointInPath(x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::fillText(DOMString* text, double x, double y)
{
    cerr << "fillText(text, x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::fillText(DOMString* text, double x, double y,
    double maxWidth)
{
    cerr << "fillText(text, x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::strokeText(DOMString* text, double x, double y)
{
    cerr << "strokeText(text, x, y)" << endl;

    // ...
}

void CanvasRenderingContext2D::strokeText(DOMString* text, double x, double y,
    double maxWidth)
{
    cerr << "strokeText(text, x, y, maxWidth)" << endl;

    // ...
}

TextMetrics* measureText(DOMString* text)
{
    cerr << "measureText(text)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double dx,
    double dy)
{
    cerr << "drawImage([image] image, dx, dy)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "drawImage([image] image, dx, dy, dw, dh)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "drawImage([image] image, sx, sy, sw, sh, dx, dy, dw, dh)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double dx,
    double dy)
{
    cerr << "drawImage([canvas] image, dx, dy)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "drawImage([canvas] image, dx, dy, dw, dh)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "drawImage([canvas] image, sx, sy, sw, sh, dx, dy, dw, dh)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double dx,
    double dy)
{
    cerr << "drawImage([video] image, dx, dy)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "drawImage([video] image, dx, dy, dw, dh)" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "drawImage([video] image, sx, sy, sw, sh, dx, dy, dw, dh)" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::createImageData(double sw, double sh)
{
    cerr << "createImageData(sw, sh)" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::createImageData(ImageData* imagedata)
{
    cerr << "createImageData(imagedata)" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::getImageData(double sx, double sy,
    double sw, double sh)
{
    cerr << "getImageData(sx, sy, sw, sh)" << endl;

    // ...
}

void CanvasRenderingContext2D::putImageData(ImageData* imagedata, double dx,
    double dy)
{
    cerr << "putImageData(imagedata, dx, dy)" << endl;

    // ...
}

void CanvasRenderingContext2D::putImageData(ImageData* imagedata, double dx,
    double dy, double dirtyX, double dirtyY, double dirtyWidth,
    double dirtyHeight)
{
    cerr << "putImageData(imagedata, dx, dy, dirtyX, dirtyY, dirtyWidth, "
        "dirtyHeight)" << endl;

    // ...
}
