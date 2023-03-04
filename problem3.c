#include<stdio.h>

// PALINDROM Check
int main(){

    int number, new_number = 0;

    // Enter value from keyboard
    printf("Enter value of the number:");
    scanf("%d", &number);

    // Copy initial number
    int copy_number = number;

    // Create new number using digits of the initial
    while (number != 0) {
        new_number = new_number * 10 + number % 10;
        number /= 10;
    }

    // Check if the new number is equal with the initial number
    if (new_number == copy_number) {
        printf("ESTE PALINDROM\n");
    } else {
        printf("NU ESTE PALINDROM\n");
    }

    return 0;

}