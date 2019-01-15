//
// Created by Konrad Werys on 14/01/2019.
//

#ifndef MYLIB_MYLIBAPI_H
#define MYLIB_MYLIBAPI_H

#include "mylib_export.h"
#include "mylib.h"


MYLIB_EXPORT void myfunctionApi();

template class MYLIB_EXPORT myclass<int>;

#endif //MYLIB_MYLIBAPI_H
