//Q48: Write a program to print the following pattern:
//	1
//	12
//	123
//	1234
//	12345

#include <stdio.h>
int main()
{
	int r=5;
	for (int i=1; i<=r;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");

}
}
