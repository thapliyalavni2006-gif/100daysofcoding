//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct s {
    char n[30];
    int r;
    int marks;
};
void printstr(struct s student);
int main()
 {
    struct s student;
    printf("Enter name, roll, and marks: ");
    scanf("%s %d %d",student.n,&student.r,&student.marks);
    printstr(student);
 return 0;
}

void printstr(struct s student) {
    printf("Name: %s | Roll: %d | Marks: %d\n",student.n,student.r,student.marks);
}

