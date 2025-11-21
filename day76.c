//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;
  char c;
  f=fopen("data.txt","r");
  if(f==NULL)
  {
	printf("File does not exist");
	return 0;
}
	else{
    char line[40];
    while (fgets(line,sizeof(line),f) != NULL)
	{
    printf("%s",line);
    }
	fclose(f);
	return 0;
	}
}