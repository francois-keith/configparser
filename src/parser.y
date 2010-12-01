/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
%require "2.4.1"
%skeleton "lalr1.cc"
%defines
%locations

%define namespace "IniLoader"

%define parser_class_name "Parser"

%parse-param { IniLoader::Scanner &scanner }
%parse-param { std::string currentSection }
%parse-param { std::vector< std::vector<std::string> > &configlines }

%lex-param   { IniLoader::Scanner &scanner }

%code requires {
	
	#include <string>
	#include <sstream>
	#include <iostream>
	#include <vector>
	#include <string>

	// We want to return a string
	#define YYSTYPE std::string

		namespace IniLoader {

			// Forward-declare the Scanner class; the Parser needs to be assigned a 
			// Scanner, but the Scanner can't be declared without the Parser
			
			class Scanner ;
		
		}
}

%code {
	// Prototype for the yylex function
	static int yylex(IniLoader::Parser::semantic_type * yylval,
	                 IniLoader::Parser::location_type * yylloc,
	                 IniLoader::Scanner &scanner);
}

%token STRING SECTION_START SECTION_END ASSIGNMENT

%%

input
	: input line
	| line
	;
	
line
	: section
	| value
	;
	
section
	: SECTION_START STRING SECTION_END { currentSection = $2; }
	;
	
value
	: STRING ASSIGNMENT STRING { std::vector<std::string> line ;
				     line.push_back( $1 ) ;
				     line.push_back( $3 ) ;
	                             configlines.push_back(line) ; 
				     }
			
	;
	
%%

// Error function throws an exception (std::string) with the location and error message
void IniLoader::Parser::error(const IniLoader::Parser::location_type &loc,
                                          const std::string &msg) {
	std::ostringstream ret;
	ret << "Parser Error at " << loc << ": " << msg;
	throw ret.str();
}

// Now that we have the Parser declared, we can declare the Scanner and implement
// the yylex function
#include "Scanner.h"
static int yylex(IniLoader::Parser::semantic_type * yylval,
                 IniLoader::Parser::location_type * yylloc,
                 IniLoader::Scanner &scanner) {
	return scanner.yylex(yylval, yylloc);
}

