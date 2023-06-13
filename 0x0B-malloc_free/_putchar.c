#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to be printed
 *
 * Return: 1 (Success)
 * On error -1 is returned , and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
