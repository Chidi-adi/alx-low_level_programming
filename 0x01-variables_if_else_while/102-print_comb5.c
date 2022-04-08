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

while (a <= 57)
{
b = 48;

while (b <= 57)
{
c = 48;

while (c <= 57)
{
d = 48;

while (d <= 57)
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
if (a == 57 && b == 56 && c == 57 && d == 57)
{
break;
}
putchar(',');
putchar(' ');
}
d++;
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
