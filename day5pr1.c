// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main()
{
    int pr;
    printf("Enter principal value");
    int rate;
    printf("Enter rate");
    int t;
    printf("Enter duration");
    scanf("%d", &pr);
    scanf("%d", &rate);
    scanf("%d", &t);
    int si;
    int ci;
    int n;
    printf("Enter number of times compounded  :");
    scanf("%d,&n");
    si = pr * rate * t;
    ci = pr * (1 + rate / n) ^ n * t;
    printf("Simple interest is :%d", si);
    printf("Compound interest is :%d", ci);
    return 0;
}