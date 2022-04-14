 /*
 * File: 3-print_numbers.c 
 * Auth: Chidiadi Nwosu
 */

#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Return: 0 Always.
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}

	_putchar('\n'); 
}

