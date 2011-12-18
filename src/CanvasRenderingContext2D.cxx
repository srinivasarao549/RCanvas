#include <iostream>
#include <string>

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

int CanvasRenderingContext2D::_getNextID()
{
    static int i = 0;

    return ++i;
}

void CanvasRenderingContext2D::save()
{
    cerr << "{\"method\":\"save\",\"params\":null,\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

void CanvasRenderingContext2D::restore()
{
    cerr << "{\"method\":\"restore\",\"params\":null,\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::scale(double x, double y)
{
    cerr << "{\"method\":\"scale\",\"params\":[" << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::rotate(double angle)
{
    cerr << "{\"method\":\"rotate\":,\"params\":[" << angle << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::translate(double x, double y)
{
    cerr << "{\"method\":\"translate\",\"params\":[" << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::transform(double a, double b, double c,
    double d, double e, double f)
{
    cerr << "{\"method\":\"transform\",\"params\":[" << a << "," << b << "," <<
        c << "," << d << "," << e << "," << f << "],\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

void CanvasRenderingContext2D::setTransform(double a, double b, double c,
    double d, double e, double f)
{
    cerr << "{\"method\":\"setTransform\",\"params\":[" << a << "," << b <<
        "," << c << "," << d << "," << e << "," << f << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

CanvasGradient* CanvasRenderingContext2D::createLinearGradient(double x0,
    double y0, double x1, double y1)
{
    cerr << "{\"method\":\"createLinearGradient\",\"params\":[" << x0 <<
        "," << y0 << "," << x1 << "," << y1 << "],\"id\":" << _getNextID() <<
        "}" << endl;

    // ...

    return new CanvasGradient();
}

CanvasGradient* CanvasRenderingContext2D::createRadialGradient(double x0,
    double y0, double r0, double x1, double y1, double r1)
{
    cerr << "{\"method\":\"createRadialGradient\",\"params\":[" << x0 << "," <<
        y0 << "," << r0 << "," << x1 << "," << y1 << "," << r1 <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(HTMLImageElement* image,
    DOMString* repetition)
{
    cerr << "{\"method\":\"createPattern\",\"params\":[\"" << image <<
        "\",\"" << repetition << "\"],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(
    HTMLCanvasElement* image, DOMString* repetition)
{
    cerr << "{\"method\":\"createPattern\",\"params\":[\"" << image <<
        "\",\"" << repetition << "\"],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

CanvasPattern* CanvasRenderingContext2D::createPattern(HTMLVideoElement* image,
    DOMString* repetition)
{
    cerr << "{\"method\":\"createPattern\",\"params\":[\"" << image <<
        "\",\"" << repetition << "\"],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::clearRect(double x, double y, double w,
    double h)
{
    cerr << "{\"method\":\"clearRect\",\"params\":[" << x << "," << y << "," <<
        w << "," << h << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::fillRect(double x, double y, double w, double h)
{
    cerr << "{\"method\":\"fillRect\",\"params\":[" << x << "," << y << "," <<
        w << "," << h << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::strokeRect(double x, double y, double w,
    double h)
{
    cerr << "{\"method\":\"strokeRect\",\"params\":[" << x << "," << y <<
        "," << w << "," << h << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::beginPath()
{
    cerr << "{\"method\":\"beginPath\",\"params\":null,\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::closePath()
{
    cerr << "{\"method\":\"closePath\",\"params\":null,\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::moveTo(double x, double y)
{
    cerr << "{\"method\":\"moveTo\",\"params\":[" << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::lineTo(double x, double y)
{
    cerr << "{\"method\":\"lineTo\",\"params\":[" << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::quadraticCurveTo(double cpx, double cpy,
    double x, double y)
{
    cerr << "{\"method\":\"quadraticCurveTo\",\"params\":[" << cpx << "," <<
        cpy << "," << x << "," << y << "],\"id\":" << _getNextID() << "}" <<
        endl;

    // ...
}

void CanvasRenderingContext2D::bezierCurveTo(double cp1x, double cp1y,
    double cp2x, double cp2y, double x, double y)
{
    cerr << "{\"method\":\"bezierCurveTo\",\"params\":[" << cp1x << "," <<
        cp1y << "," << cp2x << "," << cp2y << "," << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::arcTo(double x1, double y1, double x2,
    double y2, double radius)
{
    cerr << "{\"method\":\"arcTo\",\"params\":[" << x1 << "," << y1 << "," <<
        x2 << "," << y2 << "," << radius << "],\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

void CanvasRenderingContext2D::rect(double x, double y, double w, double h)
{
    cerr << "{\"method\":\"rect\",\"params\":[" << x << "," << y <<
        "," << w << "," << h << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::arc(double x, double y, double radius,
    double startAngle, double endAngle)
{
    cerr << "{\"method\":\"arc\",\"params\":[" << x << "," << y << "," <<
        radius << "," << startAngle << "," << endAngle << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::arc(double x, double y, double radius,
    double startAngle, double endAngle, bool anticlockwise)
{
    cerr << "{\"method\":\"arc\",\"params\":[" << x << "," << y << "," <<
        radius << "," << startAngle << "," << endAngle << "," <<
        anticlockwise << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::fill()
{
    cerr << "{\"method\":\"fill\",\"params\":null,\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

void CanvasRenderingContext2D::stroke()
{
    cerr << "{\"method\":\"stroke\",\"params\":null,\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawSystemFocusRing(Element* element)
{
    cerr << "{\"method\":\"drawSystemFocusRing\",\"params\":[\"" << element <<
        "\"],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

bool CanvasRenderingContext2D::drawCustomFocusRing(Element* element)
{
    cerr << "{\"method\":\"drawCustomFocusRing\",\"params\":[\"" << element <<
        "\"],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::scrollPathIntoView()
{
    cerr << "{\"method\":\"scrollPathIntoView\",\"params\":null,\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::clip()
{
    cerr << "{\"method\":\"clip\",\"params\":null,\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

bool CanvasRenderingContext2D::isPointInPath(double x, double y)
{
    cerr << "{\"method\":\"isPointInPath\",\"params\":[" << x << "," << y <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::fillText(DOMString* text, double x, double y)
{
    cerr << "{\"method\":\"fillText\",\"params\":[\"" << text << "\"," << x <<
        "," << y << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::fillText(DOMString* text, double x, double y,
    double maxWidth)
{
    cerr << "{\"method\":\"fillText\",\"params\":[\"" << text << "\"," << x <<
        "," << y << "," << maxWidth << "],\"id\":" << _getNextID() << "}" <<
        endl;

    // ...
}

void CanvasRenderingContext2D::strokeText(DOMString* text, double x, double y)
{
    cerr << "{\"method\":\"strokeText\",\"params\":[\"" << text << "\"," <<
        x << "," << y << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::strokeText(DOMString* text, double x, double y,
    double maxWidth)
{
    cerr << "{\"method\":\"strokeText\",\"params\":[\"" << text << "\"," <<
        x << "," << y << "," << maxWidth << "],\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}

TextMetrics* CanvasRenderingContext2D::measureText(DOMString* text)
{
    cerr << "{\"method\":\"measureText\",\"params\":[\"" << text <<
        "\",\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double dx,
    double dy)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "," << dw << "," << dh << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLImageElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        sx << "," << sy << "," << sw << "," << sh << "," << dx << "," << dy <<
        "," << dw << "," << dh << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double dx,
    double dy)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "," << dw << "," << dh << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLCanvasElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        sx << "," << sy << "," << sw << "," << sh << "," << dx << "," << dy <<
        "," << dw << "," << dh << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double dx,
    double dy)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double dx,
    double dy, double dw, double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        dx << "," << dy << "," << dw << "," << dh << "],\"id\":" <<
        _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::drawImage(HTMLVideoElement* image, double sx,
    double sy, double sw, double sh, double dx, double dy, double dw,
    double dh)
{
    cerr << "{\"method\":\"drawImage\",\"params\":[\"" << image << "\"," <<
        sx << "," << sy << "," << sw << "," << sh << "," << dx << "," << dy <<
        "," << dw << "," << dh << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::createImageData(double sw, double sh)
{
    cerr << "{\"method\":\"createImageData\",\"params\":[" << sw << "," <<
        sh << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::createImageData(ImageData* imagedata)
{
    cerr << "{\"method\":\"createImageData\",\"params\":[" << imagedata <<
        "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

ImageData* CanvasRenderingContext2D::getImageData(double sx, double sy,
    double sw, double sh)
{
    cerr << "{\"method\":\"getImageData\",\"params\":[" << sx << "," << sy <<
        "," << sw << "," << sh << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::putImageData(ImageData* imagedata, double dx,
    double dy)
{
    cerr << "{\"method\":\"putImageData\",\"params\":[\"" << imagedata <<
        "\"," << dx << "," << dy << "],\"id\":" << _getNextID() << "}" << endl;

    // ...
}

void CanvasRenderingContext2D::putImageData(ImageData* imagedata, double dx,
    double dy, double dirtyX, double dirtyY, double dirtyWidth,
    double dirtyHeight)
{
    cerr << "{\"method\":\"putImageData\",\"params\":[\"" << imagedata <<
        "\"," << dx << "," << dy << "," << dirtyX << "," << dirtyY << "," <<
        dirtyWidth << "," << dirtyHeight << "],\"id\":" << _getNextID() <<
        "}" << endl;

    // ...
}
