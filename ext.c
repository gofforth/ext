#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int 
main(int argc, char** argv)
{
	int i;

	if (argc == 1) {
		printf("%s: [FILE]... \n", argv[0]);
		exit(0);
	}

	for (i = 1; i < argc; ++i) {
		char* prev = strrchr(argv[i], '.');
		printf("%s\n", prev ? prev : "<no extension>" );
	}
	
	return 0;
}
