#include <iostream>

#include "classe.h"

void la_classe::parse_config_line ( std::vector<std::string> &args ) {

	std::cout << "received " << args.size() << std::endl ;
	for (unsigned int i=0; i<args.size(); i++ )
		std::cout << "  Arg : " << args[i] << std::endl ;


}

