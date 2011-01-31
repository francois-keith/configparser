/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
%{
	#include "scanner.h"
	// used to keep track of location
	#define YY_USER_ACTION yylloc->columns(yyleng);
%}

%option nodefault yyclass="Scanner" noyywrap c++



separator	[\t ]+

%%

%{
	yylloc->step();
%}

[#].*"\n"			{ return BisonFlex::Parser::token::COMMENTAIRE ; } 
"["      			{ return BisonFlex::Parser::token::COMMAND_START ; }
"]"				{ return BisonFlex::Parser::token::COMMAND_STOP ; }
[0-9a-zA-Z\._\-\/]*		{ *yylval = yytext; return BisonFlex::Parser::token::STRING ; }			

.            { yylloc->step(); }
"\n"+        { yylloc->lines(yyleng); yylloc->step(); }

