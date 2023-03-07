#include <stdio.h>

/**
 * Got n numbers from keyboard
 * For each number, make sum of digits
 * And print the biggest sum
 * We need two functions: Sum of digits and value
 * for each number for keyboard
 */
int number_digit_sum(int number)
{
	int digit_sum = 0;

	while (number != 0) {
		digit_sum += abs(number % 10);
		number /= 10;
	}

	return digit_sum;
}

int number_processing(int n)
{
	int i, number, max_sum = 0, sum_tmp;

	for (i = 0; i < n; i++) {
		printf("Insert number:\n");
		scanf("%d", &number);

		sum_tmp = number_digit_sum(number);
		if (sum_tmp > max_sum)
			max_sum = sum_tmp;
	}

	return max_sum;
}

int main()
{

	int n;

	printf("Enter value of n: ");
	scanf("%d", &n);

	printf("Maximum digit sum = %d\n", number_processing(n));

	return 0;
}
