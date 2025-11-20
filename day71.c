//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>
 int main()
 {
	FILE *f1=fopen("info.txt","w");
	if(f1==NULL)
	{
		printf("File could not be opened ");
		return 0;
	}
	char name[20];
	int age;
	printf("What is your name? ");
	scanf("%s",name);
	printf("What is your age? ");
	scanf("%d",&age);

	fprintf(f1,"Name: %s\n",name);
	fprintf(f1,"Age: %d\n",age);
	fclose(f1);
	printf("File created successfully! Data written to info.txt");

	return 0;
 }