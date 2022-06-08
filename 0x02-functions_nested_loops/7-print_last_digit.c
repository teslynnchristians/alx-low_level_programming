#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int n)
{
<<<<<<< HEAD
int a;

if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;

_putchar(a + '0');

return (a);
=======
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
