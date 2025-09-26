//Q71: Read and print a matrix.

#include <stdio.h>
int main()
{
	int n,m,i=0,j=0;
	printf("enter the number of rows  ");
    scanf("%d",&n);
	printf("enter the number of columns  ");
    scanf("%d",&m);
	int arr[n][m];
	printf("enter array elements ");
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix looks like\n ");
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[i][j]); }
		 printf("\n");  }
			return 0;


}