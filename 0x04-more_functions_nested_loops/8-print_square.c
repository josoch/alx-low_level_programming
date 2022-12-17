/*
 * File: 8-print_square.c
 * Author: Ocholi Joseph
 *
 */

#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
/** If size is 0 or less, just print a newline */
		_putchar('\n');
	}
	else
	{
/** Otherwise, print a square of size `size` */
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

