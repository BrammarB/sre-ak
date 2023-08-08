
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void secret() {

	printf("Holy heck, how did you do that?!\n");

}

void vulnerable() {

	char buff[32];

	printf("Enter data...\n");
	read(0, buff, 1000);		// whoops!

}

int main() {

	vulnerable();

}
