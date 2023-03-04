#include<stdio.h>

// General avg. : ((avg of marks)*3 + mark_teza) / 4

int main() {

    int mark_1, mark_2, mark_3, mark_4, mark_teza, avg = 0, final_avg = 0;

    // Keyboard values

    // Enter mark_1 from keyboard
    printf("Enter value of mark_1:");
    scanf("%d", &mark_1);

    // Enter mark_2 from keyboard
    printf("Enter value of mark_2:");
    scanf("%d", &mark_2);

    // Enter mark_3 from keyboard
    printf("Enter value of mark_3:");
    scanf("%d", &mark_3);

    // Enter mark_4 from keyboard
    printf("Enter value of mark_4:");
    scanf("%d", &mark_4);

    // Enter mark_teza from keyboard
    printf("Enter value of mark_teza:");
    scanf("%d", &mark_teza);

    // Avg. of marks
    avg = (mark_1 + mark_2 + mark_3 + mark_4) / 4;

    // Print avg. of marks
    printf("Avg. of marks: %d\n", avg);

    // Final avg
    final_avg = ((3 * avg) + mark_teza) / 4;

    // Print final avg.
    printf("Final avg.: %d\n", final_avg);

    return 0;
}