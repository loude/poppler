/*
* This file is used to set the poppler_qt5_EXPORT macros right.
* This is needed for setting the visibility on windows, it will have no effect on other platforms.
*/
#if defined(_WIN32)
# define _POPPLER_QT5_LIB_EXPORT __declspec(dllexport)
# define _POPPLER_QT5_LIB_IMPORT __declspec(dllimport)
#else
# define _POPPLER_QT5_LIB_EXPORT
# define _POPPLER_QT5_LIB_IMPORT
#endif

#ifdef poppler_qt5_EXPORTS
# define POPPLER_QT5_EXPORT _POPPLER_QT5_LIB_EXPORT
#else
# define POPPLER_QT5_EXPORT _POPPLER_QT5_LIB_IMPORT
#endif
