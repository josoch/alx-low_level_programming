/*
 * File: 3-print_numbers.c
 * Author: Ocholi Joseph
 */

#include "holberton.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num);

	_putchar('\n');
}
