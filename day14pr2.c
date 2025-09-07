// 28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
	int n;
	printf("enter value of n ");
	scanf("%d", &n);
	int pdt = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			pdt = pdt * i;
		}
	}
	printf("Product is %d\n", pdt);
	return 0;
}