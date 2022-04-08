#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c, d, op1, op2;
a = 48;

for (a; a <= 57; a++)
{
b = 48;

for (b; b <= 57; b++)
{
c = 48;

for (c; c <= 57; c++)
{
d = 48;

for (d; d <= 57; d++)
{
op1 = a * 10 + b;
op2 = c * 10 + d;

if (op1 < op2)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a == 57 && b ==56 && c == 57 && d == 57)
{
break;
}
putchar(',');
putchar(' ');
}

}

}

}

}

putchar('\n');
return (0);
}
