#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always
 */
int main(void)
{
<<<<<<< HEAD
long int i, x = 1, y = 2, sum = 0, tSum = 0;
for (i = 0; i < 49; i++)
{
if ((y % 2 == 0) && (y <= 4000000))
{
tSum = tSum + y;
}
sum = x + y;
x = y;
y = sum;
}
printf("%ld\n", tSum);
return (0);
=======
	long int i, x = 1, y = 2, sum = 0, tSum = 0;

	for (i = 0; i < 49; i++)

	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tSum = tSum + y;
		}
	sum = x + y;
x = y;
y = sum;
	}
	printf("%ld\n", tSum);
	return (0);
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
