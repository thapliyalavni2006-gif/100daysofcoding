// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main()
{
	int n, dig;
	printf("enter a binary number: ");
	scanf("%d", &n);
	while (n != 0)
	{
		dig = n % 10;
		if (dig == 1)
		{
			printf("0");
		}
		else if (dig == 0)
		{
			printf("1");
		}
		n = n / 10;
	}
	printf("complement of %d is", n);
	return 0;
}