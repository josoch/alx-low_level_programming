#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - initiating betty
 *
 * Description: main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time());
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d is negative\n", n);
	return (0);
}
