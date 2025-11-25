//Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum colours {
    red,
	green,
	yellow,
	blue=6,
	pink
};

int main() {
    printf("RED = %d\n",red);
    printf("GREEN = %d\n",yellow);
    printf("BLUE = %d\n",blue);
    printf("YELLOW = %d\n",pink);
    return 0;
}
