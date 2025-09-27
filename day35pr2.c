//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n,k,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
	 int arr[100];
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
	printf("Enter value of k (number of rotations): ");
    scanf("%d",&k);
 	int temp[100];
	for (i=0;i<k;i++) {
        temp[i]=arr[n-k+i];
    }
	 for (i=0;i<n-k;i++) {
        temp[k+i]=arr[i];
    }
    for (i=0;i<n;i++) {
        arr[i]=temp[i];
    }
	 printf("Array after rotating right by %d positions:\n",k);
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
