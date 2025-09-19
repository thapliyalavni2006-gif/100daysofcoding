//Q51: Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345


#include <stdio.h>

int main()
{
    int n=5;
    for (int i=1;i<=n;i++) {
        // Print spaces
        for (int s =1;s<=n-i;s++)
        {
            printf(" ");
        }
        // Print numbers
        for (int j = n-i+1;j<=n;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
