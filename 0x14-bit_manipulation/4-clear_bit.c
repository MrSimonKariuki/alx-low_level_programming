/*
 * This program defines a function that clears (sets to 0) a bit at a specified
 * index within an unsigned long integer. It uses bitwise operations to perform
 * this bit modification.
 */

#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 for success, -1 for failure (if the index is out of range)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of the valid range (greater than 63) */
if (index > 63)
return (-1);

/*
 * Use a bitwise AND operation with the complement of a bit mask to clear
* the bit at the specified index (set it to 0) while leaving other bits
* unchanged.
*/
*n = (~(1UL << index) & *n);

/* Return 1 to indicate success */
return (1);
}
