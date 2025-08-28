// Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter value of num1");
    scanf("%d", &num1);
    printf("Enter value of num2");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping,first number is=%d\n", num1);
    printf("After swapping,second number is=%d\n", num2);
    return 0;
}
