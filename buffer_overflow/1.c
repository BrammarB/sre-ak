#include <stdio.h>

void no_way_to_possibly_get_here() {

	printf("Access granted, welcome admin!\n");
	printf("root@localhost:~# \n");

}

int main() {

	char buff[16];

	printf("Enter some data\n");

	gets(buff);

	printf("You entered: %s\n", buff);

}