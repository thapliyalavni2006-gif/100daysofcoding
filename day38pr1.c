//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int n,m,r,c,i,j;
    printf("Enter the number of rows in matrix 1: ");
    scanf("%d",&n);
    printf("Enter the number of columns in matrix 1: ");
    scanf("%d",&m);
	 int a[n][m];
    printf("Enter elements of matrix 1:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows in matrix 2: ");
    scanf("%d",&r);
    printf("Enter the number of columns in matrix 2: ");
    scanf("%d",&c);
	 int b[r][c];
    printf("Enter elements of matrix 2:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    // Checking whether the matrices can be added
    if (n==r && m==c) {
        printf("Matrices can be added.\n");

        int sum[n][m];
        for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }

        printf("Resultant matrix after addition:\n");
        for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Matrices cannot be added.\n");
    }

    return 0;
}
