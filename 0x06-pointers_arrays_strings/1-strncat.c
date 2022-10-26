#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int k, j;

k = 0;
while (dest[k] != '\0')
{
k++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[k] = src[j];
j++;
k++;
}

dest[k] = '\0';

return (dest);
}
