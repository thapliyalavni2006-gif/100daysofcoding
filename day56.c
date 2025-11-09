//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

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
		int nextg=-1; //nextgreater element (if no next greater element exists,nextg=-1)
        for (int j=i+1;j<n;j++)   //checking element on right of i
		 {
            if (arr[j]>arr[i]) {
                nextg=arr[j];
                break;
            }
        }
        printf("%d ",nextg);
    }
    printf("\t");
    return 0;
}
