#ifndef CLASSE_H
#define CLASSE_H

/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
#include <string>
#include <vector>

#include <configparser.h>

class la_classe:public WithConfigFile {

    public:void parse_config_line (std::vector<std::string> &line) ;



};


#endif
