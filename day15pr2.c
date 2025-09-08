// Q30: Write a program to reverse a given number.
#include <stdio.h>
int main()
{
	int n, rev = 0;
	printf("Enter number which you want to reverse ");
	scanf("%d", &n);
	while (n > 0)
	{
		int digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("%d", rev);
	return 0;
}
