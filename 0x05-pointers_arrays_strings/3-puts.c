#iclude "main.h"

/**
 * _puts - this is a fuction that put
 *@str: a param to _puts function
 */
void _puts(char *str)
{
for(; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n') 
}   
