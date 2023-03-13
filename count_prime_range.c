#include<stdio.h>

/**
 * Count how many numbers are between two
 * integers and print them
*/

int prime(int number)
{
	if (number > 1) {
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0) {
				return 0;
			}
		}
		return 1;
	} else if (number == 0 || number == 1) {
		return 0;
	}
}

int main()
{
	int nr_1, nr_2;
	int count = 0;

	/*Keyboard values*/
	printf("Enter value of nr_1: ");
	scanf("%d", &nr_1);

	printf("Enter value of nr_2: ");
	scanf("%d", &nr_2);

	for (int i = nr_1; i <= nr_2; i++) {
		if (prime(i) == 1) {
			count++;
			printf("%d;", i);
		}
	}

	printf("\nCount: %d\n", count);

	return 0;

}