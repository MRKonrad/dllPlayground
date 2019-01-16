//
// Created by Konrad Werys on 14/01/2019.
//

#include "mylibApi.h"

int main(){
    myfunctionApi();

    myclassTemplate<int> myobjectFromTemplate;
    myobjectFromTemplate.mymethod(6);

    myclass myobject;
    myobject.mymethod(9);

    return 0;
}
