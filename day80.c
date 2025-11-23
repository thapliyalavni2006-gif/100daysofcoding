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
	   for(int i=0;i<n;i++){
        printf("enter name of student :");
        scanf("%s",&name[i]);
        
        printf("enter roll no: ");
        scanf("%d",&roll);

        printf("enter  marks: ");
        scanf("%d",&marks);
     fprintf(fp,"%s %d %f \n",name,roll,marks);
    }
    
     printf("    Student Records    \n");
    
     for(int i=0;i<n;i++){
     fscanf(fp,"%s %d %d", intro, &t, &s);
     printf("Name: %s, Roll: %d, Marks: %f\n",name,roll,marks);}
    
 fclose(fp);
     return 0;
  }



