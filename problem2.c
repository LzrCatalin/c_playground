#include<stdio.h>

/**
 * Got n numbers from keyboard input, print numbers which have ONE PRIME NUMBER and THREE CONSECUTIVE NUMBERS
 */

int main() {
    
    int how_many_numbers, number, digit, copy_number;
	int digit_tmp, digit_cnt, prime_digit, cons_digits;

    // Enter number of numbers from keyboard
    printf("Enter number: ");
    scanf("%d", &how_many_numbers);

    // Enter value of n numbers
    while (how_many_numbers != 0) {
        
        // Enter value for each number
        printf("Enter number value: ");
        scanf("%d", &number);

        // Copy initial number for later
        copy_number = number;

        // Get number digits
		digit_tmp = -1;
		prime_digit = 0;
		cons_digits = 0;
        while (number != 0) {

            digit = number % 10;
            
            // Print each digit of the number
            printf("%d digit of %d\n", digit, copy_number);

            // Check if digit is prime
			if (digit == 1 || digit == 2 || digit == 3 || digit == 5 ||
				digit == 7) {
				prime_digit = 1;
			}

			// Consecutive digits logic
			if (digit == digit_tmp) {
				digit_cnt++;
			} else {
				digit_tmp = digit;
				digit_cnt = 1;
			}

			// Check three consecutive digits
			if (digit_cnt >= 3)
				cons_digits = 1;

            number /= 10;
        }

		if (prime_digit == 1 && cons_digits == 1)
			printf("Result: %d\n", copy_number);

        how_many_numbers--;
    }

    printf("%d\n", number);

    return 0;
}