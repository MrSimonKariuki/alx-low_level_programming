/*
 * This program defines a function that counts the number of bits that need
 * to be changed in order to transform one unsigned long integer into another.
 * It calculates the exclusive OR (XOR) of the two numbers and counts the
 * number of set bits in the result.
 */
#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}
