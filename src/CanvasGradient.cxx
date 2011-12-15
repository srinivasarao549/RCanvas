#include <iostream>

using namespace std;

#include "CanvasGradient.hh"

CanvasGradient::CanvasGradient()
{
    cerr << "CanvasGradient()" << endl;

    // ...
}

CanvasGradient::~CanvasGradient()
{
    cerr << "~CanvasGradient()" << endl;

    // ...
}

void CanvasGradient::addColorStop(double offset, DOMString* color)
{
    cerr << "addColorStop(offset, color)" << endl;

    // ...
}
