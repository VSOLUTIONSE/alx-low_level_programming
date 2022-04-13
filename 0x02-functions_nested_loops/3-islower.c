#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: characer to be checked
 *
 * Return: 1 if character is lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
