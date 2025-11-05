//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main()
{
int n,i,x,res;
int found=0;
 printf("How many elements do you want in your sorted array?");
 scanf("%d",&n);
 printf("Enter sorted array: ");
 int arr[n];
 for(i=0;i<n;i++)
 {
	scanf("%d",&arr[i]);
 }
 printf("which element do you want to search for?");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
    if(arr[i]>=x)
	{
      printf("index of element greater than x is %d",i);
	  found=1;
	  break;
	}
 }
 if(found==0)
 {
	printf("-1:not found ");
 }
 return 0;
}
