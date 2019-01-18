#include "library.h"


void myfunction(){
    std::cout << "myfunction" << std::endl;
}

int myclass::mymethod(int number){
    std::cout << "mymethod: " << number << std::endl;
    return 0;
}
