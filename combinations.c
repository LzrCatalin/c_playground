#include<stdio.h>

/**
 * Using a factorial function, return the result of
 * combinations of n taken by m
*/

int factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, m;
    int result = 0;

    /*Keyboard values*/
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of m: ");
    scanf("%d", &m);

    /*Print factorial function result*/
    printf("%d! is: %d\n", n, factorial(n));

    if (m <= n) {
        result = factorial(n) / ((factorial(m) * factorial(n - m)));
    } else {
        result = 0;
    }

    /*Print result of combinations*/
    printf("C(%d,%d)=%d\n", n, m, result);

    return 0;
    
}