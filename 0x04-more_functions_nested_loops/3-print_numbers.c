/*
 * File: 3-print_numbers.c
 * Author: Ocholi Joseph
 */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
    for (int i = 0; i < 10; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}

