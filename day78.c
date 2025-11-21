//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *ptr=fopen("data.txt","r");
	if(ptr==NULL)
	{
		printf("File could not be opened ");
		return 0;
	}
   int v=0,cons= 0;
   char c;

    while ((c=fgetc(ptr))!=EOF)
	{
        if (isalpha(c))   //to check character is alphabet
		{
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                v++;
            else
                cons++;
        }
    }
	printf("Vowels:%d\n",v);
    printf("Consonants:%d",cons);
     fclose(ptr);
	 return 0;
}