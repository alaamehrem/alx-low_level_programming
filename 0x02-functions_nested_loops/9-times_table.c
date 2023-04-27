#include "main.h"
/**
 *times_table - prints times table
 *Return: 0 always
 */
void times_table(void)
{
    int i , j ;
    for (i=0 ; i < 10 ; i++ )
    {
        for(j = 0 ; j < 10 ; j++)
        {
        int r;
        r = i*j;
        if (r<10 && j!=0)
        {
            putchar(r + '0');
            putchar(',');
            putchar(' ');
            putchar(' ');
        }
        else
        {
            putchar((r/10) + '0');
            putchar((r%10) + '0');
            putchar(',');
            putchar(' ');
        }

        }
    putchar('\n');
    }
}

	

