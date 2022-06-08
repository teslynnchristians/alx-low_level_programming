#include "main.h"
#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: starting point
 *
 * Return: returns nothing
 *
 */
void print_to_98(int n)
{
<<<<<<< HEAD
if (n <= 98)
{
for (n = n; n <= 97; n++)
printf("%d, ", n);
}
else
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("98\n");
=======
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
