//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
struct Student{
	char name[10];
	int roll;
	float marks;
};

int main()
{
  FILE *ptr=fopen("student.txt","w");
  if(ptr==NULL)
  {
	printf("File was not opened.");
	return 0;
  }
  else
  {
	 int n,i;
	printf("How many records do you want? ");
    scanf("%d",&n);
	struct Student s[n];
    for (i=0;i<n;i++) {
        printf("Enter details about student %d (Name,Roll no.Marks): ",i+1);
        scanf("%s %d %f",s[i].name,s[i].roll,&s[i].marks);
	}
		for (i=0;i<n;i++) {
        fprintf(ptr,"%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);
    }
}
//now to read file
	 ptr=fopen("student.txt","r");
    if (ptr==NULL) {
        printf("File could not be opened for reading.\n");
        return 0;
    }

    struct Student t;
    printf("\nStudent Records from file:\n");
    while (fscanf(ptr,"%s %d %f",t.name,&t.roll,&t.marks)==3) //if all three are read successfully then condition is true otherwise false
	{

        printf("Name: %s | Roll: %d | Marks: %.0f\n", t.name,t.roll,t.marks);
    }

    fclose(ptr);
    printf("Records written to student.txt\n");
return 0;

  }


