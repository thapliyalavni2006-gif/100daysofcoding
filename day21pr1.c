// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
	int n, first, end, swap, digit, divide;
	printf("enter number ");
	scanf("%d", &n);
	digit = log10(n);
	divide = pow(10, digit);
	first = n / divide;
	n = n % divide;
	end = n % 10;
	n = n / 10;
	swap = end * divide + n * 10 + first;
	printf("swap value is %d ", swap);
	return 0;

}
