#ifndef LIBPARSER_H
#define LIBPARSER_H

#ifdef WIN32
#define LIBPARSER_API __declspec(dllexport)
#else
#define LIBPARSER_API 
#endif

/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

#include <fstream>
#include <string>
#include <vector>
#include <stdint.h>


LIBPARSER_API class WithConfigFile {

  public:

    std::vector< std::vector<std::string> > config_lines ;

    LIBPARSER_API virtual void parse_config_line ( std::vector<std::string> &line ) = 0 ;

    LIBPARSER_API void read_config_file(const char *fileName) throw(std::string) ; 

};



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




#endif

