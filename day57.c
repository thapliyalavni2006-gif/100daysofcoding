//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

#include <stdio.h>

int main()
{
	int n,i;
	printf("How many elements in array ? ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++) {
		int prevgr=-1; //prevgreater element (if no prev greater element exists,prevgr=-1)
        for (int j=n-1;j>0;j--)   //checking from right to left
		 {
            if (arr[j]>arr[i]) {
                prevgr=arr[j];
                break;
            }
        }
        printf("%d ",prevgr);
    }
    printf("\t");
    return 0;
}