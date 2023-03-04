#include<stdio.h>

// Got 4 numbers: Sum of the biggest and the lowest, and check if all the numbers are different

int main() {

    int number_1, number_2, number_3, number_4, maxim = 0, minim = 99999999, suma = 0;

    // Keyboard values
    
    // Enter value of number_1
    printf("Enter value of number_1:");
    scanf("%d", &number_1);

    // Enter value of number_2
    printf("Enter value of number_2:");
    scanf("%d", &number_2);

    // Enter value of number_1
    printf("Enter value of number_3:");
    scanf("%d", &number_3);

    // Enter value of number_1
    printf("Enter value of number_4:");
    scanf("%d", &number_4);

    // Check with number its the lowest and the highest
    // Number_1
    if (number_1 < minim) {
        minim = number_1;
    }
    if (number_1 > maxim) {
        maxim = number_1;
    }

    // Number_2
    if (number_2 < minim) {
        minim = number_2;
    }
    if (number_2 > maxim) {
        maxim = number_2;
    }

    // Number_3
    if (number_3 < minim) {
        minim = number_3;
    }
    if (number_3 > maxim) {
        maxim = number_3;
    }

    // Number_4
    if (number_4 < minim) {
        minim = number_4;
    }
    if (number_4 > maxim) {
        maxim = number_4;
    }

    // Print lowest and highest
    printf("Lowest number: %d\n", minim);
    printf("Highest number: %d\n", maxim);

    // Sum of highest and lowest
    suma = maxim + minim;

    // Print sum
    printf("Suma is: %d\n", suma);

    // Check if all numbers are different
    if (number_1 != number_2 && number_1 != number_3 && number_1 != number_4 && number_2 != number_3 && number_2 != number_4 && number_3 != number_4) {
        printf("Toate numerele sunt diferite? da\n");
    } else {
        printf("Toate numerele sunt diferite? nu\n");
    }

    return 0;

}