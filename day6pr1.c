// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int no;
    printf("Enter number ");
    scanf("%d", &no);
    if (no % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}
