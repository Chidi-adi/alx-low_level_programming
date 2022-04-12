#include "main.h"
#include <stdio.h>

/**
 * main - Prints _putchar as a message
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i[] = {95, 112, 117, 116, 99, 104, 97, 114};
int j = 0;
while (j < 8)
{
putchar(i[j]);
j++;
}
putchar ('\n');
return (0);
}
