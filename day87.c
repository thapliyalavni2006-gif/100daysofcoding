//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role {
    ADMIN,
	USER,
	GUEST
};

int main()
{
enum role msg;
int c;
printf("Who do you want a message for?(0-admin,1-user,2-guest)");
scanf("%d",&c);
msg=c;
if(c==0)
{
	printf("Welcome admin.You can give access to others as well. ");
}
else if(c==1)
{
	printf("Hello user!");
}
else if(c==2)
{
	printf("Welcome guest ");
}
else{
	printf("invalid input");
}
return 0;
}