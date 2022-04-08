#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
