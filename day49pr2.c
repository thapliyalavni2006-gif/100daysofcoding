//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][30];  // to store individual words
    int i = 0, j = 0, k = 0, count = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // remove newline

    // Split name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[count][j++] = name[i];
        } else if (j > 0) {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
    }
    words[count][j] = '\0'; // last word
    count++;

    // Print initials for all but the last word
    printf("Result: ");
    for (i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print last word (surname) in full
    printf("%s\n", words[count - 1]);

    return 0;
}
