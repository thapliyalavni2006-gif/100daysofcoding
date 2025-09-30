//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int n,m,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);

    int arr[n][m],rowSum[n];
    printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    // Calculate sum of each row
    for (i=0;i<n;i++) {
        rowSum[i]=0;
        for (j=0;j<m;j++) {
            rowSum[i]+=arr[i][j];
        }
    }
  // Print row sums
    printf("Sum of each row:\n");
    for (i=0;i<n;i++) {
        printf("Row %d = %d\n",i+1,rowSum[i]);
    }
 return 0;
}

