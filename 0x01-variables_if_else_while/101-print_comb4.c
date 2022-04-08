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
int z = 48;

while (z <= 57)
{ 
if (x != y && y != z && x != z && x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);

if(x == 55 && y == 56 && z == 57)
{
break;
}
putchar(',');
putchar(' ');
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
