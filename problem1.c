#include<stdio.h>

/**
 * Giving 3 numbers, print the number with the most even digits.
 */

int main(){

    int number_1, number_2, number_3, count_1 = 0, count_2 = 0, count_3 = 0;
	int copy_number_1, copy_number_2, copy_number_3;

    // Number 1 value from keyboard
    printf("Enter value of number_1:");
    scanf("%d", &number_1);

    // Number 2 value from keyboard
    printf("Enter value of number_2:");
    scanf("%d", &number_2);

    // Number 3 value from keyboard
    printf("Enter value of number_3:");
    scanf("%d", &number_3);

	// Save numbers for final print
	copy_number_1 = number_1;
	copy_number_2 = number_2;
	copy_number_3 = number_3;

    // Count how many even digits each number has

    // Number 1
    while (number_1 != 0) {
        if ((number_1 % 10) % 2 == 0){
            count_1++;
        }
        number_1 /= 10;
    }

    // Number 2
    while (number_2 != 0) {
        if ((number_2 % 10) % 2 == 0){
            count_2++;
        }
        number_2 /= 10;
    }

    // Number 3
    while (number_3 != 0) {
        if ((number_3 % 10) % 2 == 0){
            count_3++;
        }
        number_3 /= 10;
    }

    // Printing how many even digits each number has

    // Number 1
    printf("Count even digits number_1: %d\n", count_1);

    // Number 2
    printf("Count even digits number_2: %d\n", count_2);

    // Number 3
    printf("Count even digits number_3: %d\n", count_3);

    // Check and print the number with the most even digits
    if (count_1 > count_2 && count_1 > count_3){
        printf("Result: %d\n", copy_number_1);
    }else if (count_2 > count_3){
        printf("Result: %d\n", copy_number_2);
    }else{
        printf("Result: %d\n", copy_number_3);
    }

    return 0;  
    
}
