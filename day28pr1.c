//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main()
{
	int n,i,j,count;
	printf("prime numbers to be displayed till what value?\n ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
        count =0; // reset count for each number i
        for (j=1;j<=i;j++)
		 {
            if (i%j==0)
			 {
                count++;
            }
        }
        if (count==2)
            printf("%d ",i);
		}
		return 0;
	}




