/**
 * _puts - prints out a string, followed by a new line
 * @str: the string to be printed out
 * Return: the string
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(strrev[i]);
i++;
}
_putchar('\n');
}
