//
// Created by Konrad Werys on 14/01/2019.
//

#ifndef PROJECT_MYLIB_H
#define PROJECT_MYLIB_H

#include <iostream>
#include "mylib_export.h"

template< typename TYPE>
void myfunctionTemplate();

MYLIB_EXPORT void myfunction();

#include "mylib.hxx"

#endif //PROJECT_MYLIB_H
