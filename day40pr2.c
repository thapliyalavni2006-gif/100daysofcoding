//Q80: Multiply two matrices.

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
	 if (m!=r) {
        printf("Matrix multiplication not possible!\n");
	return 0; }
    printf("Enter elements of matrix 2:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            scanf("%d",&b[i][j]); } }
			int product[n][c];
			for(int i=0;i<n;i++) {
        for(int j=0; j<c;j++) {
            product[i][j]=0;
        }
    }

    // Matrix multiplication
    for (int i=0;i<n;i++) {
        for (int j=0;j<c;j++) {
            for (int k=0;k<m;k++) {
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i=0;i<n;i++) {
        for (int j=0; j<c;j++) {
            printf("%d ",product[i][j]);
			 }
        printf("\n");
    }
 return 0;
}
