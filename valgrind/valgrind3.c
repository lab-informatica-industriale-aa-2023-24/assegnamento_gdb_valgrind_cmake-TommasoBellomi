// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;
	p = (char *) malloc(20);

	char *s = p;
	for(int n = 0; n < 20; n++) {
		*s = '\0';
		s++;
	}

	for(int n = 0; n < 20; n++) { //corretto 30 con 20 per non superare la memoria allocata
		*s = 'A';
		s++;
	}

	free(p);

	return 0;

}
