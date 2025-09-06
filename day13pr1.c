// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
	int n1, n2, sum, diff, div, rem, pr;
	char op;
	printf("Enter first number");
	scanf("%d", &n1);
	printf("Enter second number");
	scanf("%d", &n2);
	printf("What operation do you want to perform? (+,-,*,/,%)");
	scanf(" %c", &op);
	switch (op)
	{
	case '+':
		sum = n1 + n2;
		printf("%d", sum);
		break;
	case '-':
		diff = n1 - n2;
		printf("%d", diff);
		break;
	case '*':
		pr = n1 * n2;
		printf("%d", pr);
		break;
	case '/':
		div = n1 / n2;
		printf("%d", div);
		break;
	case '%':
		rem = n1 % n2;
		printf("%d", rem);
		break;
	default:
		printf("invalid choice");
		break;
	}
	return 0;
}