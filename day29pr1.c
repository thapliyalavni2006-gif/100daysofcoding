//Q57: Find the sum of array elements

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("How many elements do you wish to enter? ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    printf("Sum of elements is %d\n",sum);
    return 0;
}


