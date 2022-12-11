#include <ctype.h>
#include <stdio.h>
/**
 * main - alphabet in lowercase
 *
 * Description: Playing play the alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	return (0);
}
