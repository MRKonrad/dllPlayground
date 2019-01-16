//
// Created by Konrad Werys on 16/01/2019.
//

#ifndef ANOTHERDLL_LIBRARY_HXX
#define ANOTHERDLL_LIBRARY_HXX

template< typename TYPE>
TYPE myclassTemplate<TYPE>::mymethod(TYPE number) {
    std::cout << "myclassTemplate mymethod's number: " << number << std::endl;
    return 0;
}

//template class ANOTHERDLL_EXPORT myclassTemplate<int>;
//template class ANOTHERDLL_EXPORT myclassTemplate<float>;
//template class ANOTHERDLL_EXPORT myclassTemplate<double>;

#endif //ANOTHERDLL_LIBRARY_HXX
