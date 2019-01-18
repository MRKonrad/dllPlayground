# Playing with dll libs

Take a look at my [blog post](http://mrkonrad.github.io/MRKonrad/CMakeDll). Additionally I realised that to generate symbols in a dynamic library from a template: 
1. There has to be a .cpp file that includes header files from which we want to generate the symbols. 
2. The explicit template instantiation (```template class ANOTHERDLL_EXPORT myclassTemplate<int>;```) has to be in a different file then the declaration of the template class.

I have made a MVP (minimal viable project) in anotherDll project. The explicit template instantiation```template class ANOTHERDLL_EXPORT myclassTemplate<int>;``` can be either in ```libraryApi.h``` or in ```library.hxx``` file.

I would appreciate some insight on these requirements, as I do not quite understand where they are coming from.
 
# Tips
You can get a list of symbols in dll you can use ```nm -gU <mydynlib>```
