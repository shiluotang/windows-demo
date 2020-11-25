#ifndef TEST1_HPP_INCLUDED
#define TEST1_HPP_INCLUDED

#if defined(__MINGW__) || defined(__CYGWIN__)
#   include <w32api.h>
#endif

#ifndef _WIN32_IE
#   ifndef _WIN32_IE_IE30
#       define _WIN32_IE_IE30 0x0300
#   endif
#   define _WIN32_IE _WIN32_IE_IE30
#endif

#include <windows.h>
#include <commctrl.h>

#define IDI_APPICON                    101
#define IDR_MAINMENU                   102
#define IDR_ACCELERATOR                103
#define IDD_ABOUTDIALOG                104
#define ID_FILE_EXIT                   40001
#define ID_HELP_ABOUT                  40002

#ifndef IDC_STATIC
#   define IDC_STATIC                   -1
#endif

#endif // TEST1_HPP_INCLUDED
