//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>
int main()
{
   int n;
   printf("Enter n : ");
   scanf("%d",&n);
    //s1=sum b/w 1 to x ,s2=sum b/w x and n
    for (int x=1;x<=n;x++)  // check each x
    {
       int s1=0,s2=0;
   for(int i=1;i<=x;i++)
   {
	s1=s1+i;
   }
   for(int j=x;j<=n;j++)
   {
	s2=s2+j;
   }
            if(s1==s2)
			{
				printf("Pivot integer is %d",x);
				return 0;
			}
			}
printf("-1");
return 0;
}