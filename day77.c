//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main()
{
  FILE *p=fopen("input.txt","r");
   if (p==NULL)
   {
	printf("File could not be opened.");
	return 0;
   }
   char c;
    while ((c=fgetc(p))!=EOF)
	 {
        putchar(toupper(c)); //takes one character at a time
    }
    fclose(p);
    return 0;
}
