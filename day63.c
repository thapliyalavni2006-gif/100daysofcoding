//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b) {  //quicksort
    return (*(int *)a -*(int *)b);
}

int main()
{
int n;
printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i=0; i<n;i++)
        scanf("%d",&arr[i]);
		int k;
		printf("Enter value of k ");
		scanf("%d",&k);
		qsort(arr,n,sizeof(int),compare);  //sorting the array then finding kth smallest element.

		for(int i=0;i<n;i++)
		{
           printf("%dth smallest element is :%d",k,arr[k-1]);
		   break;
		}
return 0;
	}