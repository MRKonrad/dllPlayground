//
// Created by Konrad Werys on 14/01/2019.
//

#ifndef PROJECT_MYLIB_HXX
#define PROJECT_MYLIB_HXX

template< typename TYPE>
void myfunctionTemplate(){
    std::cout << "Hello" << std::endl;
}

template< typename TYPE>
TYPE myclass<TYPE>::mymethod(TYPE number) {
    std::cout << "mymethod's number: " << number << std::endl;
    return 0;
}


#endif //PROJECT_MYLIB_HXX