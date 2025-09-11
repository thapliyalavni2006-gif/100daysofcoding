// Q34: Write a program to check if a number is prime.

#include <stdio.h>
int main()
{
	int n, i, count = 0;
	printf("enter a number ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 2) // if the counter value is 2 then that means it was only divided by 1 and itself and no other number in between
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	return 0;
}
