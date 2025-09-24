//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n,m,i,j;
    printf("Enter number of elements in first array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements for first array:\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d",&m);
    int b[m];
    printf("Enter %d elements for second array:\n",m);
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }

    // Merged array
    int merg[n+m];
    for(i=0;i<n;i++) {
        merg[i]=a[i];
    }
    for(j=0;j<m;j++) {
        merg[i] =b[j];
        i++;
    }
    printf("Merged array is: ");
    for(i=0;i<n+m;i++) {
        printf("%d ",merg[i]);}
     return 0;
}
