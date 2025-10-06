//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int space=0,dig=0,sp= 0;

    printf("Enter a string: ");
    fgets(str,200,stdin);

    for (int i=0;str[i]!='\0';i++) {
        if (str[i] ==' ') {
            space++;
        }
        else if (str[i]>='0' && str[i]<= '9') {
            dig++;
        }
        else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]=='\n') {
        }
        else {
            sp++;
        } }
printf("Number of spaces: %d\n", space);
printf("Number of digits: %d\n", dig);
printf("Number of special characters: %d\n",sp);
 return 0;
}
