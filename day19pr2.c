// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
	int n, dig, sum = 0;
	printf("enter number ");
	scanf("%d", &n);
	while (n != 0)
	{
		dig = n % 10;
		sum = sum + dig;
		n = n / 10;
	}
	printf("sum of digits is %d", sum);
	return 0;
}