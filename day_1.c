// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter value of x \n");
    scanf("%d", &x);
    int y;
    printf("Enter value of y \n");
    scanf("%d", &y);
    int sum;
    int diff;
    int pdt;
    int div;
    sum = x + y;
    diff = x - y;
    pdt = x * y;
    div = x / y;
    printf("Sum is=%d", sum);
    printf("Difference is=%d", diff);
    printf("Product is=%d", pdt);
    printf("Quotient is=%d", div);
    return 0;
}
