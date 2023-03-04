#include<stdio.h>

// Biggest odd and lowest even digit in a number

int main() {

    int number, maxim = 0, minim = 9;

    // Enter value from keyboard
    printf("Enter value of number:");
    scanf("%d", &number);

    // Get each digit of the number
    while (number != 0) {
        
        int digit = number % 10;

        // Check if digit its even and if its lower than minim
        if (digit % 2 == 0 && digit < minim) {
            minim = digit;
        }

        // Check if digit its odd and if its bigger than maxim
        if (digit % 2 != 0 && digit > maxim) {
            maxim = digit;
        }

        number /= 10;

    }

    // Print the results
    printf("Lowest even digit: %d\n", minim);
    printf("Biggest odd digit: %d\n", maxim);

    return 0;
}