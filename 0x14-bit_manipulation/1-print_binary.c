/*
 * This program defines a function that prints the binary equivalent
 * of a decimal number. It uses bitwise operations to extract each bit
 * and print '1' or '0' accordingly.
 */

#include "main.h"

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
putchar('1');
count++;
}
else if (count)
{
putchar('0');
}
}

if (!count)
putchar('0');
}
