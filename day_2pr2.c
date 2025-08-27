// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main()
{
    int radius;
    printf("Enter value of radius");
    scanf("%d", &radius);
    float area;
    area = 3.14 * (radius * radius);
    printf("Area =%f", area);
    float cir;
    cir = 2 * 3.14 * radius;
    printf("Circumference =%f", cir);
    return 0;
}
