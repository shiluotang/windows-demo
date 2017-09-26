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
	$(LTRCCOMPILE) --include-dir=$(srcdir) -i $< -o $@
.rc.$(OBJEXT):
	$(RCCOMPILE) --include-dir=$(srcdir) -i $< -o $@
###############################################

check_PROGRAMS = test1

test1_SOURCES = \
				./tests/test1.cxx \
				./tests/test1.rc
test1_CPPFLAGS = -DUNICODE -D_UNICODE
test1_LDFLAGS = -lcomctl32 -all-static

TESTS = $(check_PROGRAMS)
