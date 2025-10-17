//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];if (!fgets(s,1000,stdin)) return 0;
    int n=strlen(s);
    if (n>0 && s[n-1]=='\n') { s[--n]='\0'; }

    int i=0;
    while (i<n) {
        if (isspace((unsigned char)s[i])) {
            putchar(s[i++]);
        } else {
            int j=i;
            while (j<n && !isspace((unsigned char)s[j])) j++;

            for (int k=j-1;k>=i;--k) putchar(s[k]);
            i=j;
        }
    }
    putchar('\n');
    return 0;
}
