//Q74: Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int n,m,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);

    int a[n][m],tran[m][n];
    printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i =0;i<n;i++) {
        for (j =0;j<m;j++) {
            tran[j][i]=a[i][j];
        }
    }
	 // original matrix
    printf("\nOriginal Matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	//transpose matrix
    printf("\nTranspose Matrix:\n");
    for (i=0;i< m;i++) {
        for (j=0;j< n;j++) {
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }

    return 0;
}
