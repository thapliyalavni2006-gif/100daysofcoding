// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main()
{
	int n1, n2, lcm, v = 1;
	printf("Enter 1st number ");
	scanf("%d", &n1);
	printf("Enter second number ");
	scanf("%d", &n2);
	lcm = (n1 > n2) ? n1 : n2;
	while (v)
	{
		if (lcm % n1 == 0 && lcm % n2 == 0)
		{
			printf("LCM of %d and %d is %d\n", n1, n2, lcm);
			v = 0;
		}
		lcm++;
	}
	return 0;
}