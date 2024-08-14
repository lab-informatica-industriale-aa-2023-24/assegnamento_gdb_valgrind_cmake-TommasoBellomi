// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int)); //alloco 40 byte 
	x[9] = 0; //quindi da 0 a 9

	free(x);
}

int main(void)
{
	f();
	return 0;
}
