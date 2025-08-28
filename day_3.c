// Q5 : Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    int cel;
    printf("Enter temperature in celsius");
    scanf("%d", &cel);
    float fh;
    fh = (cel * 9 / 5) + 32;
    printf("Temperature in fahrenheit is =%f", fh);
    return 0;
}