/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
#include <string>
#include <iostream>
#include <cstring>

#include "classe.h"

int main(int argc, char * argv[]) {
	
	la_classe aldo ;
	
	try {
	
		aldo.read_config_file( argv[1] ) ;
	
	} catch ( std::string error) {
		
		std::cerr << error << std::endl ;
	
	}

	return 0;

}

