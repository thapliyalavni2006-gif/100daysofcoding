//Q.67Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n,pos,elem,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
	int arr[n];
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
	printf("Enter the element to insert: ");
    scanf("%d",&elem);
	printf("Enter the position (1 to %d) where you want to insert: ",n);
    scanf("%d",&pos);

    if (pos<1 || pos>n+1)
	{
        printf("Invalid position!\n");
    } else
	{
        // shift elements to the right
        for (i=n;i>=pos;i--)
		 {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=elem;
        n++;
	 printf("Array after insertion:\n");
        for (i =0;i<n;i++) {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
