#ifndef pythonificator_h_INCLUDED
#define pythonificator_h_INCLUDED
#include <stdio.h>
#define TYPE int
#include "generic_add.h"

#define TYPE double
#include "generic_add.h"

#define TYPE float
#include "generic_add.h"

#define add(a, b) ((_Generic((a), \
                    int: add_int, \
                    float: add_float, \
                    double: add_double)) \
                    (a, b))

void print_int(int a) {
	printf("%d\n", a);
}

void print_float(float a) {
	printf("%.2f\n", a);
}

void print_double(double a) {
	printf("%.2f\n", a);
}

#define print(a) _Generic((a), \
                           int: print_int, \
                           float: print_float, \
                           double: print_double, \
                           default: printf) \
                           (a);

#endif // pythonificator_h_INCLUDED
