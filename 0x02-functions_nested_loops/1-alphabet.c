#include "holberton.h"

/**
 * main - Entry point
 *
 * description - print out lower-alpha  using only _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
