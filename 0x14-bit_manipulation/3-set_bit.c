/*
 * This program defines a function that sets a bit at a specified index to 1
 * within an unsigned long integer. It utilizes bitwise operations to achieve
 * this bit modification.
 */
#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to set to 1 (0-based)
 *
 * Return: 1 for success, -1 for failure (if the index is out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of the valid range (greater than 63) */
if (index > 63)
return (-1);

/* Use a bitwise OR operation to set the bit at the specified index to 1 */
*n = ((1UL << index) | *n);

/* Return 1 to indicate success */
return (1);
}
