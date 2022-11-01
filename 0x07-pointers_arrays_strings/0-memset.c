#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills the first n bytes of the memory area
 *  to by @s with the constant byte @c.
 *  @s: A pointer to the memory area to be filled.
 *  @b: char to beused.
 *  @n: The number of byte to the memory block.
 *  Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++; n--)
	{
		s[index] = b;
	}

	return (s);
}
