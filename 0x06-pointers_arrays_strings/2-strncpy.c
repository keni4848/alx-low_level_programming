#include "main.h"
/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
*
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
{
	dest[i] = src[i];
	i++;
	j++;
}
	dest[i] = '\0';
	return (dest);
}
