#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NUM_ALLOCS	10000
#define ALLOC_SIZE	128*1024

int main() {

	void *p;
	int i;

	printf("Allocating lots of memory...\n");

	for (i=0; i<NUM_ALLOCS; i++) {

		p = malloc(ALLOC_SIZE);
		memset(p, 'A', ALLOC_SIZE);

	}

	printf("Done!\n");

	sleep(99999);

}