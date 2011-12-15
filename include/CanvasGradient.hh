#ifndef CANVASGRADIENT_HH
#define CANVASGRADIENT_HH

#include "DOMString.hh"

class CanvasGradient
{
public:
    CanvasGradient();
    ~CanvasGradient();

    void addColorStop(double offset, DOMString* color);
};

#endif
