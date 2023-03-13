#include<stdio.h>

/**
 * Make digits sum of numbers 
 * between two integers
*/

int digits_sum(int number)
{
	int sum = 0;

	while (number) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int main()
{
	int nr_1, nr_2;
	int final_sum = 0;

	/*Keyboard values*/
	printf("Enter value of nr_1: ");
	scanf("%d", &nr_1);

	printf("Enter value of nr_2: ");
	scanf("%d", &nr_2);

	if (nr_1 <= nr_2 && nr_1 > 0 && nr_2 > 0) {

		/*Get all numbers between first and second integer*/
		for (int i = nr_1; i <= nr_2; i++) {

			/*Make sum using function*/
			final_sum += digits_sum(i);
		}
		/*Print the result*/
		printf("%d \n", final_sum);
	} else {
		printf("intrare invalida: numerele nu sunt pozitive; numerele nu reprezinta un interval valid\n");
	}

	return 0;

}