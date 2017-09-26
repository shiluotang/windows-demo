#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#if defined(__MINGW__) || defined(__CYGWIN__)
#   include <w32api.h>
#endif
#include <windows.h>
#include <commctrl.h>

#include <iosfwd>

#if defined(UNICODE) || defined(_UNICODE)
typedef std::string xstring;
typedef std::ostream xostream;
typedef std::istream xistream;
typedef std::stringstream xstringstream;
#else
typedef std::wstring xstring;
typedef std::wostream xostream;
typedef std::wistream xistream;
typedef std::wstringstream xstringstream;
#endif

#endif // WINDOW_HPP_INCLUDED
