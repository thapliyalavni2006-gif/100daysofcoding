//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main()
{
    int n,s,i,pos,m;
    printf("How many elements do you want in your array?  : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements in sorted sequence:\n",n);
    for (int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
	}
	printf("enter element to be inserted ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
       if(s<arr[i]) {
		pos=i;
		break;
	   }if(s>arr[n-1]) {
		pos=n;
		break;
	   }
	   }
	   if (pos!=n) {
		m=n-pos+1;
		for(i=0;i<=m;i++)
		{
			arr[n-i+2]=arr[n-i+1];
		}
		}
		arr[pos]=s;
		printf("Final list is \n");
		for(i=0;i<n+1;i++) {
			printf("%d  ",arr[i]);
		}
		return 0;
		}

