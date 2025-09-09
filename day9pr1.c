// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, p, q;
    float dt; // where p and q are roots of equation
    printf("enter coefficient of x square = ");
    scanf("%d", &a);
    printf("enter coefficient of x = ");
    scanf("%d", &b);
    printf("enter constant term = ");
    scanf("%d", &c);
    dt = sqrt((b * b) - (4 * a * c));
    p = (sqrt(dt) - b) / (2 * a);
    q = -(sqrt(dt) + b) / (2 * a);
    if (a > 0 && dt > 0)
    {
        printf("real and distinct roots = %d \t %d", p, q);
    }
    else if (a < 0 && dt > 0)
    {
        int t = q;
        q = p;
        p = t;
        printf("real and distinct roots = %d \t %d", p);
    }
    else if (p == q && dt == 0)
    {
        printf("roots are real and equal = %d ", p);
    }
    else
    {
        printf("complex roots");
    }
    return 0;
}