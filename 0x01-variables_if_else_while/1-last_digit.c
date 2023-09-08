#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - gives info about last digit of a number
*return - always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, last_digit);
	
	if( last_digit > 5)
	{
		printf("and is greater than 5");
	}
	else if(last_digit == 0)
	{
		printf("and is 0\n");
	}
	else if(last_digit > 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
