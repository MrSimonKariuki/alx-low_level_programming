#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: string containing the binary representation
 *
 * Description:
 * This function takes a binary string 'b' and converts it into an unsigned
 * integer. The binary string must only contain '0' and '1' characters.
 * It calculates the decimal (base 10) value of the binary number using
 * a left shift operation and adding the binary digits accordingly.
 *
 * Return:
 * Returns the converted unsigned integer.
 * If 'b' is NULL or contains characters other than '0' and '1', it returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;

/* Check if the input string is NULL*/
if (!b)
return (0);

/* Iterate through the string to calculate the decimal value*/
for (i = 0; b[i]; i++)
{
/* Check if the character is not '0' or '1'*/
if (b[i] < '0' || b[i] > '1')
return (0);
/* Calculate the decimal value by left shifting and adding the binary digits*/
dec_val = 2 * dec_val + (b[i] - '0');
}

return (dec_val);
}
