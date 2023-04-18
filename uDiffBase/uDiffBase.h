// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UDIFFBASE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UDIFFBASE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UDIFFBASE_EXPORTS
#define UDIFFBASE_API __declspec(dllexport)
#else
#define UDIFFBASE_API __declspec(dllimport)
#endif

// This class is exported from the dll
class UDIFFBASE_API CuDiffBase {
public:
	CuDiffBase(void);
	// TODO: add your methods here.
};

extern UDIFFBASE_API int nuDiffBase;

UDIFFBASE_API int fnuDiffBase(void);
