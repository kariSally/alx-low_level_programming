#include <stdio.h>

/**
 * main - it prints the alphabet in: lowercase then in reverse,
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
