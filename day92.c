//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student{
    char name[10];
	int roll;
	float marks;
};

int main(){
  struct Student records[5];
for(int i=0;i<5;i++) {
        printf("Enter name,roll no. and marks for student %d: ",i+1);
        scanf("%s %d %f",records[i].name,&records[i].roll,&records[i].marks);
    }
	 printf("%-10s %-8d %-10.2f\n", "Name", "Roll No", "Marks");
    printf("                               \n");
    for(int i=0;i<5;i++) {
        printf("Name: %10s Roll No.: %8d Marks: %10.2f\n ",records[i].name,records[i].roll,records[i].marks);
    }
	return 0;
}