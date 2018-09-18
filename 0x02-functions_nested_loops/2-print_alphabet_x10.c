#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * desc - print low-alpha 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, count = 9;
	char c[] = "abcdefghijklmnopqrstuvwxyz";

	while (count > -1)
	{
		for (i = 0; i < 27; i++)
			_putchar(c[i]);
		count--;
		_putchar('\n');
	}
}
