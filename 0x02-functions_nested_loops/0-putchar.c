#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 Success
 */

int main(void)
{
	int n = 0;
	char str_put[8] = '_putchar';

	while (n < 8)
	{
		_putchar(str_put[8]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
