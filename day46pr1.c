//Q91: Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100],final[100];
    int i,j=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for (i=0;str[i]!='\0';i++) {
 if (!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )){
    final[j++]=str[i];
        }
    }
final[j]='\0';
printf("String without vowels: %s", final);
 return 0;
}


