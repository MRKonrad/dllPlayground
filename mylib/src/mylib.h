//
// Created by Konrad Werys on 14/01/2019.
//

#ifndef PROJECT_MYLIB_H
#define PROJECT_MYLIB_H

#include <iostream>
#include "mylib_export.h"

template< typename TYPE>
void myfunctionTemplate();

class myclass{
public:
    int mymethod(int number);
};

template< typename TYPE>
class myclassTemplate{
public:
    TYPE mymethod(TYPE number);
};

#ifdef mylib_EXPORTS
#include "mylib.hxx"
#endif

#endif //PROJECT_MYLIB_H
