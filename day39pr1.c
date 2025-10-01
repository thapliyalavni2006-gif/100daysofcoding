//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n,m,i,j,k,flag=1;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&m);
    if (n!=m) {
        printf("Matrix must be square!\n");
        return 0;
    }
     int arr[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (arr[i][i]==arr[j][j]) {
                flag=0;
                break;
            }
        }
        if (flag==0) break;
    }

    if (flag==1)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}
