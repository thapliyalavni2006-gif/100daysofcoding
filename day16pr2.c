// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main()
{
	int n, org, rev = 0, rem;
	printf("Enter number you want to check for palindrome ");
	scanf("%d", &n);
	org = n;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if (org == rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}