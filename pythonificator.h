#ifndef pythonificator_h_INCLUDED
#define pythonificator_h_INCLUDED
#include <stdio.h>
void print_int(int a);
void print_float(float a);
void print_double(double a);
void print_str(char* a);

#define print(a) _Generic((a), \
                         int: print_int, \
                         float: print_float, \
                         double: print_double, \
                         default: print_str) \
                         (a);

#define type(a) _Generic((a), \
                         int: "int", \
                         long: "long", \
                         float: "float", \
                         double: "double", \
                         char*: "string")

#endif // pythonificator_h_INCLUDED
