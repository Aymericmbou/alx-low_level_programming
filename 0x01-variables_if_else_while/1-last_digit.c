#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - will assign a random number to the variable n each time it's executed
 * Return: Always 0 success
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
		
		if(n % 10 > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		} else
			{
				if(n % 10 == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, n % 10);
				} else
					printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
			}	
		
				return (0);

}
