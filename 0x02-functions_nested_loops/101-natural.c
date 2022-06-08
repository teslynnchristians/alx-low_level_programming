#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
/**
 * main - check for multiples of 3 and 5
 *
 * Return: 0 always
 */
int main(void)
{
<<<<<<< HEAD
int x = 1024, y, sum = 0;
for (y = 0; y < x; y++)
{
if ((y % 3 == 0) || (y % 5 == 0))
{
sum = sum + y;
}
}
printf("%d\n", sum);
return (0);
=======
	int x = 1024, y, sum = 0;

	for (y = 0; y < x; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum = sum + y;
		}
	}
	printf("%d\n", sum);
	return (0);
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
