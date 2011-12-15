#ifndef HTMLCANVASELEMENT_HH
#define HTMLCANVASELEMENT_HH

#include "FileCallback.hh"
#include "HTMLElement.hh"
#include "DOMString.hh"
#include "object.hh"

class HTMLCanvasElement : public HTMLElement
{
public:
    HTMLCanvasElement();
    ~HTMLCanvasElement();

    unsigned long width;
    unsigned long height;

    DOMString toDataURL();
    DOMString toDataURL(DOMString* type, void* args);
    void toBlob(FileCallback* callback);
    void toBlob(FileCallback* callback, DOMString* type, void* args);
    object* getContext(DOMString* contextId, void* args);
};

#endif
