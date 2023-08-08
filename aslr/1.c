
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void secret() {

	printf("Woah there!  How did you get here?!\n");

}

void vulnerable() {

	char buff[32];

	do {

		printf("Enter data...\n");
		read(0, buff, 1000);		// whoops!

		printf("Your data: %s\n", buff);

	} while (strncmp(buff, "done", 4) != 0);

}

int main() {

	vulnerable();

}
