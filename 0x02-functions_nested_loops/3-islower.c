#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0
 */
void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;

while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
=======
 * _islower - checks for lowercase character
 *
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
>>>>>>> b4b66e3281f778df83b37bf8318da05d2fb59ea8
}
