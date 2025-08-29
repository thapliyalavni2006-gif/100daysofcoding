// Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int n1;
    printf("Enter first number: ");
    scanf("%d", &n1);
    int n2;
    printf("Enter second numeber: ");
    scanf("%d", &n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("After swapping, first number is : %d", n1);
    printf("After swapping,second number is :%d", n2);
    return 0;
}
