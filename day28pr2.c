//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>
int main()
{
	int arr[5];
	int i,j;
	printf("enter elements in array ");
	for (i =0;i<5;i++)
	 {
        scanf("%d",&arr[i]);
}
printf("The elements of the array are:\n");
    for (i =0;i<5;i++)
	 {
        printf("%d ",arr[i]);
	 }
	 return 0;
	}