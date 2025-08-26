// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter value of x\n");
    scanf("%d", &x);
    int y;
    printf("Enter value of y\n");
    scanf("%d", &y);

    int sum = x + y;
    printf("sum is %d", sum);
    return 0;
}
