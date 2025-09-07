// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	printf("Enter value of n ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
	}
	printf("Sum is %d\n", sum);
	return 0;
}