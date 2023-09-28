/*
 * This program defines a function that returns the value of a bit
 * at a specific index in a decimal number. It uses bitwise operations
 * to extract the bit at the given index.
 */

#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit (0 or 1) or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
