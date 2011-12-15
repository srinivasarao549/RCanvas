#include <iostream>

using namespace std;

#include "CanvasRenderingContext2D.hh"
#include "HTMLCanvasElement.hh"

HTMLCanvasElement::HTMLCanvasElement()
{
    cerr << "HTMLCanvasElement()" << endl;

    // ...
}

HTMLCanvasElement::~HTMLCanvasElement()
{
    cerr << "~HTMLCanvasElement()" << endl;

    // ...
}

DOMString HTMLCanvasElement::toDataURL()
{
    cerr << "toDataURL()" << endl;

    // ...
}

DOMString HTMLCanvasElement::toDataURL(DOMString* type, void* args)
{
    cerr << "toDataURL(type, args)" << endl;

    // ...
}

void HTMLCanvasElement::toBlob(FileCallback* callback)
{
    cerr << "toBlob(callback)" << endl;

    // ...
}

void HTMLCanvasElement::toBlob(FileCallback* callback, DOMString* type,
    void* args)
{
    cerr << "toBlob(callback, type, args)" << endl;

    // ...
}

object* HTMLCanvasElement::getContext(DOMString* contextId, void* args)
{
    cerr << "getContext(contextId, args)" << endl;

    // ...

    return (object*) new CanvasRenderingContext2D();
}
