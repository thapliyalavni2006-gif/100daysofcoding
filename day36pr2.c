//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    printf("How many rows? ");
    scanf("%d",&n);
	printf("How many columns? ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++) {
        scanf("%d",&arr[i][j]); }
	}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++) {
			sum=sum+arr[i][j]; }}
			printf("Sum of all elements in this matrix is %d ",sum);
		return 0;
}

