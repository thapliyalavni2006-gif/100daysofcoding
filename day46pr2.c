//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26]={0};
    int i;
	printf("Enter a string: ");
    fgets(str,100,stdin);

    for (i=0;str[i]!='\0';i++) {
        char ch=str[i];
        if (ch>='a' && ch<='z') {
            freq[ch-'a']++;
            if (freq[ch-'a']==2) {
                printf("First repeating lowercase alphabet: %c\n",ch);
                return 0;
            }
        }
    }
   printf("No repeating lowercase alphabet found.\n");
    return 0;
}
