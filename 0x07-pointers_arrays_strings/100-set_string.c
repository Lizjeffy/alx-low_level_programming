#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string
 * @to: character
 */

void set_string(char **s, char *to)
{
	int len1 = strlen(to) + 1;
	char *new_str = (char *) malloc(sizeof(char) * len1);

	strncpy(new_str, to, len1);

	*s = new_str;
}
