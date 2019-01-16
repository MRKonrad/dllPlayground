#ifndef ANOTHERDLL_LIBRARY_H
#define ANOTHERDLL_LIBRARY_H

#include <iostream>

#include "anotherdll_export.h"

template< typename TYPE>
class myclassTemplate{
public:
    TYPE mymethod(TYPE number);
};


#include "library.hxx"

#endif