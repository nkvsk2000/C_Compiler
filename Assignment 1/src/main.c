#include "code_gen.h"
#include <stdio.h>
#include <stdlib.h>

void newFiles();

int main ()
{
	// Create a new files
	newFiles();

	// Main Function
	statements ();

	fprintf(stderr, "%s\n", "Generated 'Lexemes.txt', 'Intermediate.txt', 'Assembly.asm'.");
}

void newFiles(){
	FILE *fp;

	fp = fopen("Lexemes.txt", "w");
	if (fp == NULL)	{
		fprintf(stderr, "%s\n", "ERROR : Unable to open 'Lexemes.txt'");
		exit(1);
	}
	fclose(fp);

	fp = fopen("Intermediate.txt", "w");
	if (fp == NULL)	{
		fprintf(stderr, "%s\n", "ERROR : Unable to open 'Intermediate.txt'");
		exit(1);
	}
	fclose(fp);

	fp = fopen("Assembly.asm", "w");
	if (fp == NULL)	{
		fprintf(stderr, "%s\n", "ERROR : Unable to open 'Assembly.asm'");
		exit(1);
	}
	fclose(fp);
}
