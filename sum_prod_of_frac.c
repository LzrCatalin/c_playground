#include<stdio.h>

/**
 * We got 4 numbers: a,b,c,d
 * Make a/b and c/d
 * Make sum and prod of a/b with c/d
*/

/**
 * Function needed inside main 
 * when we need to substract our fractions
*/

int cmmdc(int nr1, int nr2)
{
	while (nr1 != nr2) {
		if (nr1 > nr2) {
			nr1 -= nr2;
		} else {
			nr2 -= nr1;
		}
	}

	return nr1;
}

int main()
{
	int a, b, c, d;

	/*Using these in function name for an easy life*/
	int numerator = 0, denominator = 0;

	/*Enter keyboard values*/
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	/*Sum of the fractions*/
	if (b == d) {

		/*Find numerator, denominator*/
		numerator = a + b;
		denominator = b;

		printf("suma=%d/%d\n", numerator/cmmdc(numerator,denominator), denominator/cmmdc(numerator, denominator));

	} else {
		
		/*Find numerator, denominator*/
		numerator = (a*d) + (c*b);
		denominator = b * d;

		printf("suma=%d/%d\n", numerator/cmmdc(numerator, denominator), denominator/cmmdc(numerator, denominator));
	}


	/*Product of the fraction*/

	/*Find numerator, denominator*/
	numerator = a * c;
	denominator = b * d;

	printf("produsul=%d/%d\n", numerator/cmmdc(numerator, denominator), denominator/cmmdc(numerator, denominator));

	return 0;

}