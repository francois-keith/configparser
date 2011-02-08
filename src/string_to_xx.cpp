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

float string_to_float ( const std::string& s ) 
{
   std::istringstream i(s);
   float x;
   if (!(i >> x))
	   return 0;
   return x;
}

uint64_t  string_to_uint64 ( const std::string& s ) {
   std::istringstream i(s);
   uint64_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

uint32_t  string_to_uint32 ( const std::string& s ) {
   std::istringstream i(s);
   uint32_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

uint16_t  string_to_uint16 ( const std::string& s ) {
   std::istringstream i(s);
   uint16_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

uint8_t  string_to_uint8 ( const std::string& s ) {
   std::istringstream i(s);
   uint8_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

int64_t  string_to_int64 ( const std::string& s ) {
   std::istringstream i(s);
   int64_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

int32_t  string_to_int32 ( const std::string& s ) {
   std::istringstream i(s);
   int32_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

int16_t  string_to_int16 ( const std::string& s ) {
   std::istringstream i(s);
   int16_t x;
   if (!(i >> x))
	   return 0;
   return x;
}

int8_t  string_to_int8 ( const std::string& s ) {
   std::istringstream i(s);
   int8_t x;
   if (!(i >> x))
	   return 0;
   return x;
}
