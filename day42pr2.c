//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str,100,stdin);

    for (int i =0;str[i]!='\0';i++) {
        if (str[i]>='a' && str[i]<='z') {
            str[i]=str[i]-32;
        }
    }
  printf("Uppercase string is: %s", str);
 return 0;
}
