#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void usage(char* progname)
{
	printf("%s: <filename>\n", progname);
	exit(EXIT_SUCCESS);
}


void print_extension(char* fname)
{
	char* prev = NULL;
	char* next = strchr(fname, '.');

	while (next != NULL) {
		prev = next + 1;		/* eat the '.' */
		next = strchr(prev, '.');
	}

	printf("%s\n", prev == NULL ? "<no extension>" : prev);
}


int main(int argc, char** argv)
{
	int i;

	if (argc == 1) {
		usage(argv[0]);
	}

	for (i = 1; i < argc; ++i) {
		print_extension(argv[i]);
	}
	
	return EXIT_SUCCESS;
}
