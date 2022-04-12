#include "main.h"

/**
 * main - Prints _putchar as a message
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch[] = {95, 112, 117, 116, 99, 104, 97, 114};
    int i;
    i = 0;
    
    for (i; i <= 7; i++)
    {
    _putchar(ch[i]);
    }
    
    _putchar('\n');
    return (0);
}
