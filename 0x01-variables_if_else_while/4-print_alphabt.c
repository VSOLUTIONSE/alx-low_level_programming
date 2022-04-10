#include <stdio.h>


/**
 * main - printf the alphabet in lowercase,
 * followed by a new, except q and e
 * Return: Always 0 (Succss)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
