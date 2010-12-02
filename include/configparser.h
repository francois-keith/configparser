#ifndef LIBPARSER_H
#define LIBPARSER_H

/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

#include <fstream>
#include <string>
#include <vector>


class WithConfigFile {

  public:

    std::vector< std::vector<std::string> > config_lines ;

    virtual void parse_config_line ( std::vector<std::string> &line ) = 0 ;

    void read_config_file(const char *fileName) throw(std::string) ; 

};


#endif
