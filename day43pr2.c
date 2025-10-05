//Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len=0,i,p=0;
printf("Enter a string: ");
 fgets(str,100,stdin);
 str[strcspn(str,"\n")]='\0';
len= strlen(str);
for (i=0;i<len/2;i++) {
        if (str[i]!=str[len-i-1]) {
            p=1;
            break;
        }
    }
  if (p== 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
 return 0;
}