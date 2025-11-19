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
	int currentMax=arr[0]; // track sum of current subarray.
    int globalMax=arr[0]; //maximum sum found.
    for(i=1;i<n;i++) {
        if(currentMax<0)  //resetting
		{
            currentMax=arr[i];
        } else
		{
            currentMax+=arr[i];
        }
        if(currentMax>globalMax)
		{
            globalMax=currentMax;
        }
    }
printf("Maximum contiguous subarray sum: %d\n",globalMax);
    return 0;
}

