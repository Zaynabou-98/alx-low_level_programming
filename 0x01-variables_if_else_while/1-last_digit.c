#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Outputs a character string using puts instead of printf.
*
* Return: Always 0
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d", n, last);
	if (last == 0)
	{
		printf(" and is 0\n");
	}
	else if (last > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
