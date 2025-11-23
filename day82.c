//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
enum traffic {

	RED,YELLOW,GREEN

};
int main()
{
enum traffic signal;
 int choice;

    printf("Enter signal [0(RED),1(YELLOW),2(GREEN)]: ");
    scanf("%d",&choice);
signal=choice;
if(signal==RED)
{
        printf("Stop\n");
    } else if (signal==YELLOW)
	{
        printf("Wait\n");
    }
	else if (signal == GREEN)
	 {
        printf("Go\n");
    } else
	{
        printf("Invalid signal\n");
    }
	return 0;
}
