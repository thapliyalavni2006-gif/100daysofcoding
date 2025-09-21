//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>
int main() {
    int n;
    printf("How many elements do you wish to enter? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int max=arr[0];  // assume first element is max
    int min=arr[0];  // assume first element is min

    for (int i=1;i<n;i++)
	{
        if (arr[i]>max) {
            max=arr[i];
        }
        if (arr[i]<min)
		 {
            min=arr[i];
        }
    }

    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",min);

    return 0;
}
