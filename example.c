#include "pythonificator.h"

int main(void) {
	print(1 + 4)
	print(1 + 0.4)
	char *str = "Hello, World";
	print(str)
	print(type(str))
	int i = 1 + 2;
	print(i)
	print(type(i))
	print(type(type(i)))
}
