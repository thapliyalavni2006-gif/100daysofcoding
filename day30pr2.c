//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0;
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
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else{
			zero++;
		}
	 }
	 printf("Positive=%d ,",pos);
	 printf("Negative=%d ,",neg);
	 printf("Zero=%d ",zero);
	 return 0;
	}