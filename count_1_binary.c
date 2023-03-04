#include<stdio.h>

// Count how many time appears 1 in diff numbers binary representation

int main() {

    int number, count = 0;

    // Enter number value from keyboard
    printf("Enter number value:");
    scanf("%d", &number);

    // Do the binary representation
    while (number != 0) {

        // Count how many time 1 appears
        if (number % 2 != 0) {
            count++;
        }
        number /= 2;
    }

    // Print the number of apperences 
    printf("1 apperes %d times\n", count);

    return 0;
}