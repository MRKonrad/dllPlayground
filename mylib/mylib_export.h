//
// Created by Konrad Werys on 14/01/2019.
//

#ifndef _SHARED_EXPORTS_H__
#define _SHARED_EXPORTS_H__

#ifdef _WIN32
#ifdef mylib_EXPORT
        #define MYLIB_EXPORT __declspec(dllexport)
    #else
        #define MYLIB_EXPORT //__declspec(dllimport)
    #endif
#else
#define MYLIB_EXPORT
#endif

#endif /* _SHARED_EXPORTS_H__ */