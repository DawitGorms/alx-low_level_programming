#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - counts and returns string length
 * @s: the input string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}
