//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100];
    int count1[256]={0},count2[256]={0};
    int i;
 printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    str1[strcspn(str1,"\n")] ='\0';
    str2[strcspn(str2,"\n")] ='\0';
    if (strlen(str1)!=strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }
    for (i=0;str1[i]!='\0';i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
