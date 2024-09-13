#include "pch.h"
#include "windows.h"
#include "cmath"
//__declspec(dllexport) void __cdecl TestHello(void);
BOOL WINAPI DllMain(HINSTANCE hDll,
	DWORD  dwReason,
	LPVOID lpReserved
)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, "The DLL is loaded", "DLL Skeleton", MB_OK);
		break;
	case DLL_THREAD_ATTACH:
		MessageBox(NULL, "A thread is created in this process", "DLL Skeleton", MB_OK);
		break;
	case DLL_THREAD_DETACH:
		MessageBox(NULL, "A thread is destroyed in this process", "DLL Skeleton", MB_OK);
		break;
	case DLL_PROCESS_DETACH:
		MessageBox(NULL, "The DLL is unloaded", "DLL Skeleton", MB_OK);
		break;
	}
	return TRUE;
}

extern "C" float P(float side1,float side2,float side3)
{
	float area =side1+ side2+ side3;
	return area;
}
extern "C" float S(float side1, float side2, float side3)
{
	float S_of_tringle = (side1 + side2 + side3) / 2;
	return S_of_tringle;
}