//Q82: Print each character of a string on a new line.

#include <stdio.h>
#include <string.h>
int main() {
	printf("Enter string ");
    char str[100];
	fgets(str,100,stdin);

	for(int i=0; str[i]!='\0';i++)
	{
	printf("%c\n",str[i]); }

  return 0;
}