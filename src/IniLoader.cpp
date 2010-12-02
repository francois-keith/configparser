#include <libparser.h>

#include "Scanner.h"

void WithConfigFile::read_config_file(const char * fileName) throw(std::string) {

	std::ifstream inFile(fileName);

    	if (!inFile.good()) {
		throw std::string("Unable to open file");
    	}

    	IniLoader::Scanner scanner(&inFile);
    	IniLoader::Parser  parser(scanner, config_lines);

    	parser.parse();
	
	for ( unsigned int i=0; i<config_lines.size(); i++ )
	parse_config_line ( config_lines[i] ) ;

}
