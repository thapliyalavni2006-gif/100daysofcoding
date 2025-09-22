//Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("How many elements do you wish to enter? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
	}
	 for (int i=0;i<n;i++)
	  {
        if (arr[i]%2==0)
		{
            even++;
        } else
		{
            odd++;
		}
	}
	printf("%d even numbers and ",even);
	printf("%d odd numbers ",odd);
	return 0;
}
