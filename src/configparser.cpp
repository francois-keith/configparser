/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

#include <configparser/configparser.h>
#include "scanner.h"

namespace configparser {

void WithConfigFile::read_config_file(const char * fileName) throw(std::string) {

	config_lines.clear() ;

	std::ifstream inFile(fileName);

    	if (!inFile.good()) {
		throw std::string("Unable to open file");
    	}

    	BisonFlex::Scanner scanner(&inFile);
    	BisonFlex::Parser  parser(scanner, config_lines);

    	parser.parse();
	
	for ( unsigned int i=0; i<config_lines.size(); i++ )
	parse_config_line ( config_lines[i] ) ;

}

} ;
