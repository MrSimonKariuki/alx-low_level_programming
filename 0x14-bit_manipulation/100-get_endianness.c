/*
 * This program defines a function that checks whether the machine is
 * little-endian or big-endian by examining the least significant byte
 * of an integer.
 */
#include "main.h"
/**
 * get_endianness - Checks if a machine is little-endian or big-endian
 *
 * Return: 0 for big-endian, 1 for little-endian
 */
int get_endianness(void)
{
/* Create an integer 'i' with the value 1 and a character pointer 'c' */
unsigned int i = 1;
char *c = (char *) &i;

/* Check the value of the least significant byte in memory */
return (*c);
}
