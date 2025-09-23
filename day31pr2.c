//Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main()
{
    int n,i;
    printf("How many elements do you wish to enter? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
	}
	printf("elements are: ");
	{
      for(i=0;i<n;i++)
	  printf("%d ",arr[i]);
	  printf("\n");
	}
	printf("elements in reversed order are: ");
    for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}