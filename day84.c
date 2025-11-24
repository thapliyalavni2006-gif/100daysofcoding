//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
enum status{
	SUCCESS,FAILURE,TIMEOUT
};
int main()
{
 enum status find;
 int choice;
  printf("Enter choice to find status(0-2)");
    scanf("%d",&choice);
find=choice;
if(choice==SUCCESS)
{
printf("Operation completed");
}
else if(choice==FAILURE)
{
	printf("Operation failed");
}
else if(choice==TIMEOUT)
{
	printf("Operation timed out");
}
else
{
printf("Invalid choice");
}
return 0;
}