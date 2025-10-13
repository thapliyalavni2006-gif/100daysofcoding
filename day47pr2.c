//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[50],longest[10],temp[50];
    int i=0,j=0,maxLen=0,len=0;

    printf("Enter a sentence: ");
    fgets(str,50,stdin);
    while (str[i]!='\0') {
        if (str[i]!=' ' && str[i]!='\n') {
            temp[j++]=str[i];
        } else {
            temp[j]='\0';
            len = strlen(temp);
            if (len>maxLen) {
                maxLen=len;
                strcpy(longest,temp);
            }
            j=0;
        }
        i++;
    }
    temp[j] ='\0';
    len=strlen(temp);
    if (len>maxLen) {
        strcpy(longest,temp);
    }
printf("Longest word: %s\n", longest);
 return 0;
}
