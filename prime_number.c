#include<stdio.h>

// Check if a number is prime

int main() {

    int number, divisor = 2, ok = 1;

    // Enter number value from keyboard
    printf("Enter number value:");
    scanf("%d", &number);

    // Divide the number with the divisor, starts from 2 and stop at half of the number
    while (divisor <= number / 2) {
        if (number % divisor == 0) {
            ok = 0;
        }
        divisor++;
    }

    // Check if number is prime
    if (ok == 1) {
        printf("%d is prime\n", number);
    } else {
        printf("%d is not prime\n",number);
    }

    return 0;

}