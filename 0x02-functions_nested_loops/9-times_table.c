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
        if (r<10)
        {
            _putchar(r + '0');
            _putchar(',');
            _putchar(' ');
            _putchar(' ');
        }
        else
        {
            _putchar((r/10) + '0');
            _putchar((r%10) + '0');
            _putchar(',');
            _putchar(' ');
        }

        }
    _putchar('\n');
    }
}

	

