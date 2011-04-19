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
#include <sstream>
#include <string>
#include <vector>
#include <stdint.h>

namespace configparser {

	LIBPARSER_API class WithConfigFile {

	  public:

	    std::vector< std::vector<std::string> > config_lines ;

	    LIBPARSER_API virtual void parse_config_line ( std::vector<std::string> &line ) = 0 ;

	    LIBPARSER_API void read_config_file(const char *fileName) throw(std::string) ; 

        /* Generic function to read a member from a config file */
        LIBPARSER_API template<typename T> bool fill_member(const std::vector<std::string> & config_line, const std::string & name, T & member)
        {
            if(config_line.size() > 1 && config_line[0] == name)
            { 
                std::stringstream tmp;
                tmp << config_line[1];
                tmp >> member;
                return true;
            }
            return false;
        }

        /* Generic function to read a member vector to a config file */
        LIBPARSER_API template<typename T> bool fill_member(const std::vector<std::string> & config_line, const std::string & name, std::vector<T> & memberV)
        {
            if(config_line.size() > 1 && config_line[0] == name)
            {
                for(int i  = 1; i < config_line.size(); ++i)
                {
                    T member;
                    std::stringstream tmp;
                    tmp << config_line[i];
                    tmp >> member;
                    memberV.push_back(member);
                }
                return true;
            }
            return false;
        }

	};

}


#endif

