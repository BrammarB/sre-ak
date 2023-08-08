
#include <stdio.h>
#include <syscall.h>

void some_random_thing() {

	int my_favorite_number = 58623;

}

int main() {

	char buff[16];

	printf("Enter some data\n");

	gets(buff);

	printf("You entered: %s\n", buff);

}