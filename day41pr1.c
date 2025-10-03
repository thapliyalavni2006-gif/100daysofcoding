//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int countlen(char arr[]);

int main() {
    char name[100];
	fgets(name,100,stdin);
	printf("length is %d",countlen(name));
}

int countlen(char arr[])
{
    int count=0;
  for(int i=0; arr[i]!='\0';i++){
	count++;
  }
  return count-1;
}