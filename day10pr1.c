// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
    int l1, l2, l3;
    printf("Enter side length 1 ");
    scanf("%d", &l1);
    printf("Enter side length 2 ");
    scanf("%d", &l2);
    printf("Enter side length 3 ");
    scanf("%d", &l3);
    if (l1 == l2 && l1 == l3)
    {
        printf("equilateral");
    }
    else if (l1 == l2 && l1 != l3)
    {
        printf("isoceles");
    }
    else if (l1 != l2 && l2 == l3)
    {
        printf("isoceles");
    }
    else if (l1 != l2 && l2 != l3)
    {
        printf("scalene");
    }
    return 0;
}