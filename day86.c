//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a,b,choice;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Menu: 0. Add 1. Subtract 2. Multiply");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    enum operation op=choice;

    switch(op)
	{
        case ADD:
            printf("Sum is %d\n",a+b);
            break;
        case SUBTRACT:
            printf("Difference is %d\n",a-b);
            break;
        case MULTIPLY:
            printf("Product is %d\n",a*b);
            break;
        default:
            printf("No such operation\n");
            break;
    }
    return 0;
}
