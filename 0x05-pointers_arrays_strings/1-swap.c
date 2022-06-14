#include "main.h"

/**
 *swap_int - given two intregersswap the values they are holging
 *@a: parameter 1
 *@b: parameter 2
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
