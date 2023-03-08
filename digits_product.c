#include<stdio.h>

/**
 * Make digits product of a number
*/

int digits_prod(int number) 
{

	if (number <= 1) {
		return 1;
	} else {
		return (number % 10) * digits_prod(number /= 10); 
	}
}
int main() 
{

	int number;

	printf("Enter number value:");
	scanf("%d", &number);

	printf("Result: %d\n", digits_prod(number));

	return 0;
}