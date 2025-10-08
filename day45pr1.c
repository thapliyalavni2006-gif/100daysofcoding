//Q89: Count frequency of a given character in a string.


#include <stdio.h>
int main() {
    char str[40];
    printf("Enter a string: ");
    fgets(str,40,stdin);
	char ch;
printf("Enter character whose frequency you want to count:");
scanf("%c",&ch);
int count=0;

    for (int i=0;str[i]!='\0';i++) {
        if (str[i]==ch) {
		count++; }}
		printf("Frequency of %c is %d",ch,count);
		return 0;
		}