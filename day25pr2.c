//Q50: Write a program to print the following pattern:
//	*****
// 	****
//  ***
// 	**
//  *

#include <stdio.h>
int main()
{
    int i,j,n=5;

    for (i=0;i<n;i++)   // outer loop for rows
    {
        // print spaces
        for (j=0;j<i;j++)
        {
            printf(" ");
        }
        for (j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
