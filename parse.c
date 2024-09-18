#include <stdio.h>

#include "parse.h"

/**
 * Parse a line from a CSV file.
 * 
 * Parameters:
 *   char *line     The line buffer; a string containing a line in the file.
 *   int   ncols    The total number of columns in the row.
 *   char *values[] An array of pointers to the separate column values in the row.
 * Return:
 *   int: 0 if line was parse successfully, -1 if some error occurred.
*/
int parse(char *line, int ncols, char *values[])
{
    // TODO: Implement this function 
    
    // Do NOT use an index to traverse `line`! You will not
    // receive any points if you do so
    char *pline = line;
    char *p2line = line;
    int count = 0;  
    while (*pline != '\0') { 
	if (*pline == ',' || *pline == '\n') {
		*pline = '\0';
		values[count] = p2line; 
		pline++;
		p2line = pline;
		count++;
	} else {
		pline++;
	}
    }
    if (count < ncols) {
	return -1;
    }
    
    return 0;
}
