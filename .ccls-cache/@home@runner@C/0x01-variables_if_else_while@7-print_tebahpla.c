/*
 * File: 7-print_tebahpla.c
 * Author: Ocholi Joseph
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);

	putchar('\n');

	return (0);
}
