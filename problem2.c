#include<stdio.h>

/*
Got n numbers from keyboard input, print numbers which have ONE PRIME NUMBER and THREE CONSECUTIVE NUMBERS
*/

int main() {
    
    int how_many_numbers, number, digit, copy_number;

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
        while (number != 0) {

            digit = number % 10;
            
            // Print each digit of the number
            printf("%d digit of %d\n", digit, copy_number);

            // Check if digit is prime
            int prime = 1;
            for (int divisor = 2; divisor < digit; divisor++) {
                if (digit % divisor == 0) {
                    prime = 0;
                }
            }
            if (prime == 1) {
                printf("%d has a prime digit\n", copy_number);
            }
            
            number /= 10;
        }

        how_many_numbers--;
    }

    printf("%d\n", number);

    return 0;
}