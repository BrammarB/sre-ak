// gcc -no-pie sneaky.c

#include <stdio.h>
#include <stdlib.h>

int main() {

	long int addr = 0x40116c;

	__asm__(
		"pop %rbp;"
		"ret;"
	);


	printf("lol\n");
	exit(0);

}