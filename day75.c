//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.


#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;
  char c;
  f=fopen("data.txt","a");
  if(f==NULL)
  {
	printf("file could not be opened.");
	exit(1);
  }
char text[20];
printf("Enter text you want to add at the end of file ");
scanf("%s",text);
fprintf(f,"%s\n",text);
fclose(f);
printf("File updates successfully with appended text\n");

return 0;
}