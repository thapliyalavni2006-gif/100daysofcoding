// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main()
{
	int n, rem;
	int a[10];
	int i = 0;
	printf("Enter number ");
	scanf("%d", &n);
	while (n)
	{
		rem = n % 2;
		n = n / 2;
		a[i] = rem;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", a[j]);
	}
	return 0;
}
