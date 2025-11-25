//Q138: Print all enum names with colour names and integer values using a loop.

#include <stdio.h>

	enum colours
	{
		RED,YELLOW,GREEN,BLUE,ORANGE,WHITE,BLACK,VIOLET
	};
	int main()
	{

	 char *names[] ={"RED","YELLOW","GREEN","BLUE","ORANGE","WHITE","BLACK","VIOLET"
    }; //list of strings

    for (int i=RED;i<=VIOLET;i++)
	 {
        printf("%s=%d\n",names[i],i);

}
return 0;
	}