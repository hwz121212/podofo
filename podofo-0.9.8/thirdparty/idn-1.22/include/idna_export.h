#pragma once


#if defined(IDN_DLL)
#if defined(IDN_DLL_EXPORT)
#define IDNAPI __declspec(dllexport)
#else
#define IDNAPI __declspec(dllimport)
#endif
#else
#define IDNAPI
#endif

