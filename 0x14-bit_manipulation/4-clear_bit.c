#include "main.h"

/**
 * clear_bit - aids set the value of a given bit to 0
 * @n: pointer that points to the number to change
 * @index:thee index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
i
