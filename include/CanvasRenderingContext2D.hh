#ifndef CANVASRENDERINGCONTEXT2D_HH
#define CANVASRENDERINGCONTEXT2D_HH

#include "HTMLCanvasElement.hh"
#include "HTMLImageElement.hh"
#include "HTMLVideoElement.hh"
#include "CanvasGradient.hh"
#include "CanvasPattern.hh"
#include "TextMetrics.hh"
#include "DOMString.hh"
#include "ImageData.hh"
#include "Element.hh"
#include "object.hh"

class CanvasRenderingContext2D : public object
{
public:
    CanvasRenderingContext2D();
    ~CanvasRenderingContext2D();

    // back-reference to the canvas
    HTMLCanvasElement* canvas;

    // state
    void save();
    void restore();

    // transformations (default transform is the identity matrix)
    void scale(double x, double y);
    void rotate(double angle);
    void translate(double x, double y);
    void transform(double a, double b, double c, double d, double e, double f);
    void setTransform(double a, double b, double c, double d, double e,
        double f);

    // compositing
    double globalAlpha;
    DOMString* globalCompositeOperation;

    // colors and styles
    void* strokeStyle;
    void* fillStyle;
    CanvasGradient* createLinearGradient(double x0, double y0, double x1,
        double y1);
    CanvasGradient* createRadialGradient(double x0, double y0, double r0,
        double x1, double y1, double r1);
    CanvasPattern* createPattern(HTMLImageElement* image,
        DOMString* repetition);
    CanvasPattern* createPattern(HTMLCanvasElement* image,
        DOMString* repetition);
    CanvasPattern* createPattern(HTMLVideoElement* image,
        DOMString* repetition);

    // line caps/joins
    double lineWidth;
    DOMString* lineCap;
    DOMString* lineJoin;
    DOMString* miterLimit;

    // shadows
    double shadowOffsetX;
    double shadowOffsetY;
    double shadowBlur;
    DOMString* shadowColor;

    // rects
    void clearRect(double x, double y, double w, double h);
    void fillRect(double x, double y, double w, double h);
    void strokeRect(double x, double y, double w, double h);

    // path API
    void beginPath();
    void closePath();
    void moveTo(double x, double y);
    void lineTo(double x, double y);
    void quadraticCurveTo(double cpx, double cpy, double x, double y);
    void bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y,
        double x, double y);
    void arcTo(double x1, double y1, double x2, double y2, double radius);
    void rect(double x, double y, double w, double h);
    void arc(double x, double y, double radius, double startAngle,
        double endAngle);
    void arc(double x, double y, double radius, double startAngle,
        double endAngle, bool anticlockwise);
    void fill();
    void stroke();
    void drawSystemFocusRing(Element* element);
    bool drawCustomFocusRing(Element* element);
    void scrollPathIntoView();
    void clip();
    bool isPointInPath(double x, double y);

    // text
    DOMString* font;
    DOMString* textAlign;
    DOMString* textBaseline;
    void fillText(DOMString* text, double x, double y);
    void fillText(DOMString* text, double x, double y, double maxWidth);
    void strokeText(DOMString* text, double x, double y);
    void strokeText(DOMString* text, double x, double y, double maxWidth);
    TextMetrics* measureText(DOMString* text);

    // drawing images
    void drawImage(HTMLImageElement* image, double dx, double dy);
    void drawImage(HTMLImageElement* image, double dx, double dy, double dw,
        double dh);
    void drawImage(HTMLImageElement* image, double sx, double sy, double sw,
        double sh, double dx, double dy, double dw, double dh);
    void drawImage(HTMLCanvasElement* image, double dx, double dy);
    void drawImage(HTMLCanvasElement* image, double dx, double dy, double dw,
        double dh);
    void drawImage(HTMLCanvasElement* image, double sx, double sy, double sw,
        double sh, double dx, double dy, double dw, double dh);
    void drawImage(HTMLVideoElement* image, double dx, double dy);
    void drawImage(HTMLVideoElement* image, double dx, double dy, double dw,
        double dh);
    void drawImage(HTMLVideoElement* image, double sx, double sy, double sw,
        double sh, double dx, double dy, double dw, double dh);

    // pixel manipulation
    ImageData* createImageData(double sw, double sh);
    ImageData* createImageData(ImageData* imagedata);
    ImageData* getImageData(double sx, double sy, double sw, double sh);
    void putImageData(ImageData* imagedata, double dx, double dy);
    void putImageData(ImageData* imagedata, double dx, double dy,
        double dirtyX, double dirtyY, double dirtyWidth, double dirtyHeight);
};

#endif
