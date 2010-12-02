/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
%{
	#include <iostream>				// DEBUG
	#include "Scanner.h"
	// used to keep track of location
	#define YY_USER_ACTION yylloc->columns(yyleng);
%}

%option nodefault yyclass="Scanner" noyywrap c++



separator	[\t ]+

%%

%{
	yylloc->step();
%}

[#].*"\n"			{ std::cout << "COMMENTAIRE" << std::endl ;   return IniLoader::Parser::token::COMMENTAIRE ; } 
"["      			{ std::cout << "COMMAND_START" << std::endl ; return IniLoader::Parser::token::COMMAND_START ; }
"]"				{ std::cout << "COMMAND_STOP" << std::endl ;  return IniLoader::Parser::token::COMMAND_STOP ; }
[0-9a-zA-Z\._\-]*		{ std::cout << "STRING " << yytext << std::endl ; *yylval = yytext; return IniLoader::Parser::token::STRING ; }			

.            { std::cout << "GARBAGE" << std::endl ; yylloc->step(); }
"\n"+        { std::cout << "EOL" << std::endl ; yylloc->lines(yyleng); yylloc->step(); }

