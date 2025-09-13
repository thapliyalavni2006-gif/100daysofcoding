// Q39:prg to print the product of odd digits of a number.

#include <stdio.h>
int main()

{
	int n, dig, pr = 1, odd = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	while (n != 0)
	{
		dig = n % 10;
		if (dig % 2 != 0)
		{
			pr = pr * dig;
			odd = 1;
		}
		n = n / 10;
	}

	if (odd == 1)
		printf("Product of odd digits = %d\n", pr);
	else
		printf("No odd digits found!\n");

	return 0;
}
