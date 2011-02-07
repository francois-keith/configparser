#include <configparser.h>
#include <sstream>

double string_to_double( const std::string& s )
{
   std::istringstream i(s);
   double x;
   if (!(i >> x))
	   return 0;
   return x;
}

int string_to_int( const std::string& s )
{
   std::istringstream i(s);
   int x;
   if (!(i >> x))
	   return 0;
   return x;
}

unsigned long int string_to_ulint ( const std::string& s ) 
{

   std::istringstream i(s);
   unsigned long int x;
   if (!(i >> x))
	   return 0;
   return x;
}

