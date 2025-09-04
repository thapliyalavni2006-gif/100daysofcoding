// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
	int cp, sp, p, l;
	float lper, pper;
	printf("Enter cost price ");
	scanf("%d", &cp);
	printf("Enter selling price ");
	scanf("%d", &sp);
	if (cp > sp)
	{
		l = cp - sp;
		lper = ((float)l / cp) * 100;
		printf("Loss by %.2f", lper);
	}
	else if (sp > cp)
	{
		p = sp - cp;
		pper = ((float)p / cp) * 100;
		printf("Profit by %.2f", pper);
	}
	else if (cp == sp)
	{
		printf("Neither loss nor profit");
	}
	return 0;
}