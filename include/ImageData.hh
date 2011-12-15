#ifndef IMAGEDATA_HH
#define IMAGEDATA_HH

#include "Uint8ClampedArray.hh"

class ImageData
{
public:
    unsigned long width;
    unsigned long height;
    Uint8ClampedArray* data;
};

#endif
