//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n,i,j,sum=0;
	printf("Enter size of square matrix: ");
    scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
	 printf("\nThe elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++) {
        sum +=arr[i][i];
    }
 printf("\nSum of primary diagonal elements = %d\n", sum);
  return 0;
}
