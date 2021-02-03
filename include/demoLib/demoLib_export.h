#ifndef demoLib_export_h__
#define demoLib_export_h__

#ifdef demoLib_EXPORTS
#	define DEMOLIB __declspec(dllexport)
#else
#	define DEMOLIB __declspec(dllimport)
#endif

#endif // demoLib_export_h__

