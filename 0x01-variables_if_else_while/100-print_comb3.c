#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x = 48;

while (x <= 57)
{
int y = 48;

while (y <= 57)
{
if (x != y && x < y)
{
putchar(x);
putchar(y);
if (x == 56 && y == 57)
{
break;
}
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
