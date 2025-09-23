//Q61: Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
    int n,s,i;
    printf("How many elements do you wish to enter? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
	}
	printf("enter element to be searched ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
       if(arr[i]==s){
		printf("Element found at %d position ",i+1);
	   break;
	}
	}
	return 0;
}