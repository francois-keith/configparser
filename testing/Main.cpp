/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */
 
#include "classe.h"
#include <string>
#include <iostream>
#include <cstring>

int main(int argc, char * argv[]) {
	
	la_classe aldo ;
	
	aldo.read_config_file( argv[1] ) ;
	
	return 0;

}

