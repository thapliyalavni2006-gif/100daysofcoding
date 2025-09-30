//Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int n,i,j,flag=1;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&n);
 int arr[n][n]; // Only square matrices can be symmetric

    printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j <n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if(arr[i][j]!=arr[j][i]) {
                flag=0;
                break;
            }
        }
        if (flag==0) break;
    }
  if (flag==1)
        printf("The matrix is symmetric\n");
    else
        printf("The matrix is not symmetric\n");
 return 0;
}

