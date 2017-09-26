ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = -Wall -Werror
AM_CFLAGS 	=
AM_CXXFLAGS	=
AM_LDFLAGS 	=

###############################################
# Win32 Special Configurations and Rules.
###############################################
AM_LDFLAGS += -no-undefined
SUFFIXES = .rc
RCCOMPILE = $(RC) $(DEF) $(DEFAULT_INCLUDES) $(INCLUDES) $(CPPFLAGS)
LTRCCOMPILE = $(LIBTOOL) --mode=compile --tag=RC $(RCCOMPILE)
.rc.lo:
	$(LTRCCOMPILE) -I$(srcdir) -i $< -o $@
.rc.$(OBJEXT):
	$(RCCOMPILE) -I$(srcdir) -i $< -o $@
###############################################

lib_LTLIBRARIES = libwindowxx.la

libwindowxx_la_CPPFLAGS = $(AM_CPPFLAGS)
libwindowxx_la_SOURCES = \
						 ./src/form.cpp \
						 ./src/icon.cpp \
						 ./src/menu.cpp \
						 ./src/cursor.cpp
libwindowxx_la_LDFLAGS = $(AM_LDFLAGS) -lcomctl32 -static-libgcc

check_PROGRAMS = test1

test1_SOURCES = \
				./tests/test1.cxx \
				./tests/test1.rc
test1_CPPFLAGS = $(AM_CPPFLAGS) -DUNICODE -D_UNICODE
test1_LDFLAGS = $(AM_LDFLAGS) -lcomctl32 -all-static

TESTS = $(check_PROGRAMS)
