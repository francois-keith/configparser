AM_LFLAGS = -o lex.yy.c
AM_YFLAGS = -d -o y.tab.c
AM_CPPFLAGS = -I$(srcdir)/../include

lib_LTLIBRARIES = libparser.la

libparser_la_SOURCES = parser.yy \
		       scanner.ll \
		       IniLoader.cpp 
