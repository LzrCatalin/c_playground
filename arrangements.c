#include<stdio.h>

/**
 * Using a function, find the arrangements of n taken by m
*/
int factorial(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * factorial(n - 1); 
	}
}

int main() {
	
	int n, m;
	int result = 0;

	/*Keyboard values*/
	printf("Enter value of n: ");
	scanf("%d", &n);

	printf("Enter value of m: ");
	scanf("%d", &m);

	printf("%d! is: %d \n", n, factorial(n));

	if (n >= 1 && m >= 1 && n >= m) {
		result = factorial(n) / factorial(n - m);
	} else {
		result = 0;
	}

	printf("A(%d,%d)=%d \n", n, m, result);

	return 0;

}