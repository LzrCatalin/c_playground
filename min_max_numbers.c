#include<stdio.h>

// Print maxim of positiv numbers and minim of the negativ numbers

int main() {

    int how_many_numbers, number, maxim = 0, minim = 0;

    // Type how many numbers you want to add
    printf("Enter how many numbers:");
    scanf("%d", &how_many_numbers);

    while (how_many_numbers != 0) {
        
        // Enter value of number from keyboard
        printf("Enter number value:");
        scanf("%d", &number);

        // Print each number
        printf("Number %d is:%d\n", how_many_numbers, number);

        if (number > 0 && number > maxim) {
            maxim = number;
        }

        if (number < 0 && number < minim) {
            minim = number;
        }
        
        how_many_numbers--;

    }

    // Print result
    printf("Max positiv number:%d\n", maxim);
    printf("Minim negativ number:%d\n", minim);

     return 0;

}