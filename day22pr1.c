// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int num, temp, digit, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;
	while (temp > 0)
	{
		digit = temp % 10;		 // Extract digit
		sum += factorial(digit); // Add factorial of digit
		temp /= 10;				 // Remove last digit
	}

	if (sum == num)
		printf("Strong Number\n");
	else
		printf("not a Strong Number\n");
	return 0;
}
