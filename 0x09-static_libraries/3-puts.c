#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: parameter defined in main
 * Return: void
 */
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
