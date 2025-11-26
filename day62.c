//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of elements in your array ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int currmax=arr[0]; // track sum of current subarray.
    int glomax=arr[0]; //maximum sum found.
    for(i=1;i<n;i++) {
        if(currmax<0)  //resetting
		{
            currmax=arr[i];
        } else
		{
            currmax+=arr[i];
        }
        if(currmax>glomax)
		{
            glomax=currmax;
        }
    }
printf("Maximum contiguous subarray sum: %d\n",glomax);
    return 0;
}

