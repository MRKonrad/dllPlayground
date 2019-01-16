# Playing with dll libs

Take a look at my [blog post](http://mrkonrad.github.io/MRKonrad/CMakeDll). Additionally I realised that to generate symbols in a dynamic library from a template: 
1. There has to be a main function.
2. The explicit template instantiation (```template class ANOTHERDLL_EXPORT myclassTemplate<int>;```) has to be in a different file then the declaration of the template class.

I am not sure where these requirements are coming from, if someone can explain it to me that would be great.
I have made a MVP (minimal viable project) in anotherDll project. The explicit template instantiation```template class ANOTHERDLL_EXPORT myclassTemplate<int>;``` can be either in ```libraryApi.h``` or in ```library.hxx``` file.
 
# Tips
You can get a list of symbols in dll you can use ```nm -gU <mydynlib>```
