#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - Function to check palindromes
 * @n: numberb to be checked
 * Return: integer 1 or 0
 */
int is_palindrome(unsigned long n)
{
	unsigned long number, value = 0;

	number = n;

	while (number != 0)
	{
		value = value * 10;
		value = value + number % 10;
		number = number / 10;
	}
	if (n == value)
		return (1);
	else
		return (0);
}
