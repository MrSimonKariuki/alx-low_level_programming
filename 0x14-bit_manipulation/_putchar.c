/*
 * This program defines a function that writes a character 'c' to the
 * standard output (stdout) using the 'write' system call.
 */

#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character 'c' to stdout
 * @c: The character to print
 *
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
/* Use the 'write' system call to write the character 'c' to stdout */
return (write(1, &c, 1));
}
