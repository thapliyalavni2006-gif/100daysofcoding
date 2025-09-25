//Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d sorted elements:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int x;
    printf("Enter the element to be searched: ");
    scanf("%d",&x);
 	int low =0, high =n-1,mid,found=0;
	while (low<=high) {
        mid=(low+high)/2;
	 if (arr[mid]==x) {
            printf("Element %d found at index %d\n",x,mid);
            found=1;
            break;
        }
        else if (x>arr[mid]) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
	  if (!found)
        printf("Element %d not found\n", x);
	 return 0;
}
