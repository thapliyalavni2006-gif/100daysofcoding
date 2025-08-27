// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int len;
    printf("Enter length ");
    scanf("%d", &len);
    int br;
    printf("Enter breadth ");
    scanf("%d", &br);
    int area;
    int per;
    area = len * br;
    per = 2 * (len + br);
    printf("Area = %d", area);
    printf("Perimeter is =%d", per);

    return 0;
}