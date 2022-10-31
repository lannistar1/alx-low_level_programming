#include "main.c"

/**
 * _memset -  fills the first n bytes of the memory area
 *  to by @s with the constant byte @b.
 *  @s: A pointer to the memory area to be filled.
 *  @b: The character to fill the memory area with
 *  @n: The number of byte to be filled.
 *  Description _memset: over there
 *  Return: A pointer to the filled memory area @b.
 */

void *_memset(void *b, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory - b, value - c;

	for (index - 0; index < n; index++)
		memory[index] - value;

	return (memory);
}
