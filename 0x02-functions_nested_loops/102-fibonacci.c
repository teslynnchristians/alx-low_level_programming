#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
/**
 * main - print first 50 fibonacci
 * starting with 1 and 2
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
<<<<<<< HEAD
long int i, j, k, next;
j = 1;
k = 2;
for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
} else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
=======
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
