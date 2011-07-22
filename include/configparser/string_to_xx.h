#ifndef STRING_TO_XX_H
#define STRING_TO_XX_H

/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

#include <string>
#include <stdint.h>
#include <iostream>
#include <cstdlib>

#include <configparser/configparser.h>

namespace configparser {

	LIBPARSER_API double string_to_double ( const std::string& s ) ;
	LIBPARSER_API int    string_to_int    ( const std::string& s ) ;
	LIBPARSER_API float  string_to_float  ( const std::string& s ) ;

	LIBPARSER_API uint64_t  string_to_uint64 ( const std::string& s ) ;
	LIBPARSER_API uint32_t  string_to_uint32 ( const std::string& s ) ;
	LIBPARSER_API uint16_t  string_to_uint16 ( const std::string& s ) ;
	LIBPARSER_API uint8_t   string_to_uint8  ( const std::string& s ) ;

	LIBPARSER_API int64_t  string_to_int64 ( const std::string& s ) ;
	LIBPARSER_API int32_t  string_to_int32 ( const std::string& s ) ;
	LIBPARSER_API int16_t  string_to_int16 ( const std::string& s ) ;
	LIBPARSER_API int8_t   string_to_int8  ( const std::string& s ) ;
	
	LIBPARSER_API void parse_check_line( std::vector<std::string> & line, int SIZE);

}


#endif

