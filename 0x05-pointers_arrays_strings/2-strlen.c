#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 */
int _strlen(char *s)
{
	int length;

	char a[] = *s;
	length= sizeof(a)/sizeof(a[0]);
	printf("%d,%d\n",sizeof(a),sizeof(a[0]));
	return (length);
}
