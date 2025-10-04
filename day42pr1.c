//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>
int main() {
	printf("Enter string containing alphabets ");
    char str[100];
	fgets(str,100,stdin);
	int vowel=0;
	int cons=0;

	for(int i=0; str[i]!='\0';i++)
	{
		  if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' &&str[i]<='Z')) 
{
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                vowel++;
            else{
				cons++;
			}}
		}
	printf("No. of vowels = %d",vowel);
	printf("No. of consonants = %d",cons);
	return 0;
	}