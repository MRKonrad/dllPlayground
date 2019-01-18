#ifndef noTemplates_LIBRARY_H
#define noTemplates_LIBRARY_H

#include <iostream>

#include "notemplates_export.h"

NOTEMPLATES_EXPORT void myfunction();

class NOTEMPLATES_EXPORT myclass{
    public:
        int mymethod(int number);
};


#endif