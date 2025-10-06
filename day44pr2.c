//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);

    for (int i =0;str[i]!='\0';i++) {
        if (str[i]==' ') {
            str[i]='-';
        }
    }
 printf("New string is : %s", str);
 return 0;
}
