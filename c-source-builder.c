/************************************************
 * c-source-builder -- build a c source file 	*
 *                     from template.		*
 *                                              *
 * Author: adarke                               *
 *                                              *
 * Purpose: provide a quick way to generate c   *
 *          source files to conform to 		*
 *          template.				*
 *                                              *
 * Usage: run program and provide answers to    *
 *        prompts.				*
 *                                              *
 ************************************************/

#include <stdio.h>
#include <string.h>

const int MAX_LENGTH = 80;	/* maximum length of a line */
int column = 1;			/* current column when printing */

int main()
{
	/* build commented header */
	char line[MAX_LENGTH]; /* current line being printed */ 

	/* top line */
	strcat(line, "/");
	++column;
	
	while (column <= MAX_LENGTH) {
		strcat(line, "*");
		++column;
	}

	printf("%s\n", line);

	return (0);
}
	
