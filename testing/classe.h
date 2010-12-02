#ifndef CLASSE_H
#define CLASSE_H

#include <string>
#include <vector>

#include <libparser.h>

class la_classe:public WithConfigFile {

    public:void parse_config_line (std::vector<std::string> &line) ;



};


#endif
