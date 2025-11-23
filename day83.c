//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
enum month{

	jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec

};
int main()
{
enum month days;
 int choice;

    printf("Enter signal [0-11] for[jan-dec] ");
    scanf("%d",&choice);
days=choice;
if(choice==jan)
{
	printf("31 days");
}
else if(choice==feb)
{
	printf("28 days");
}
else if(choice==mar)
{
	printf("31 days");
}
else if(choice==apr)
{
	printf("30 days");
}
else if(choice==may)
{
	printf("31 days");
}
else if(choice==june)
{
	printf("30 days");
}
else if(choice==july)
{
	printf("31 days");
}
else if(choice==aug)
{
	printf("31 days");
}
else if(choice==sept)
{
	printf("30 days");
}
else if(choice==oct)
{
	printf("31 days");
}
else if(choice==nov)
{
	printf("30 days");
}
else if(choice==dec)
{
	printf("31 days");
}
else{
	printf("invalid choice");
}
return 0;
}
