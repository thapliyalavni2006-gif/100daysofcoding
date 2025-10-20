//Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int i;
	printf("Enter your full name: ");
    fgets(name,30,stdin);
	printf("Initials: ");
  // Print first character if it's not a space
    if (name[0]!=' ')
        printf("%c",name[0]);
    for (i=1;name[i]!='\0';i++) {
        if (name[i]==' ' && name[i + 1]!=' ' && name[i+1]!='\0') {
            printf("%c",name[i + 1]);
        }
    }    return 0;
}
