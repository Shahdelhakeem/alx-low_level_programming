#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str);
{
	char *newstr;
	int i, r = 0;

	if (str == NULL)
	return (NUll);

	i = 0;
while (str[i] != '\0')
{
	i++;
}
newstr = malloc(sizeof(char) * (i + 1));
if (newstr == NULL)
return (NULL);
for (r = 0, str[r], r++)
{
	newstr[r] = str[r];

	return (newstr);
}
}
