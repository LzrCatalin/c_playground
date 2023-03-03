#include<stdio.h>
int main(){
    
    int a, b, diff = 0;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);

    diff = a - b;

    printf("Diff of two numbers: %d\n", diff);
    
    return 0;
}