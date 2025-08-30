// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int s, hr, min, sec;
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    hr = s / 3600;
    min = (s % 3600) / 60;
    sec = (s % 3600) % 60;
    printf("Time in H:M:S format: %d:%d:%d\n", hr, min, sec);
    return 0;
}