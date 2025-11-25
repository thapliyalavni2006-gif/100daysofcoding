//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student
{
  char name[20];
  int roll;
  float marks;
};

int main()
{
 struct Student s1;
printf("Enter name: ");
    fgets(s1.name,sizeof(s1.name),stdin);

    int len=strlen(s1.name);  //to remove newline
    if (len>0 && s1.name[len-1]=='\n') {
        s1.name[len-1]='\0';
    }
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);

    printf("Enter marks: ");
    scanf("%f",&s1.marks);

    printf("  Student Details:  \n");
    printf("Name:%s | Roll:%d | Marks:%f ", s1.name,s1.roll,s1.marks);

    return 0;
}