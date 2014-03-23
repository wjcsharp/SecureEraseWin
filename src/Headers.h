#pragma once

#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#endif

#pragma warning(disable : 4995)

// Windows Header Files:
#include <windows.h>
#include <windowsx.h>
#include <Psapi.h>
#include <CommCtrl.h>
#include <commdlg.h>
#include <winioctl.h>

// C RunTime Header Files
#include <stdlib.h>
#include <stdint.h>

// C++ RunTime Header Files
#include <vector>
#include <string>
#include <map>
#include <memory>

// Manifest
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
