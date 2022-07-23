#include "main.h"
/**
* _strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: returns length of the string
*/
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
