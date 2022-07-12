#include "holberton.h"

/**
* _strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: returns length of the string
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
