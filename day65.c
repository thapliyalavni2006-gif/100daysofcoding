//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main()
 {
	printf("Enter string s(lowercase) ");
	char s[50];
	char t[50];
	scanf("%s",s);
	printf("Enter string t(lowercase) ");
	scanf("%s",t);
	int l1=strlen(s);
    int l2=strlen(t);
	if (l1!=l2) {
        printf("Not Anagram");
        return 0;}

   int slc[26]={0};  //array to store frequency of each letter in s
   int tlc[26]={0};  //array to store frequency of each letter in t

   for(int i=0;i<l1;i++)
   {
     slc[s[i]-'a']++;    //a points to 0,b to 1,c to 2,.....so on
   }
   for(int i=0;i<l2;i++)
   {
     tlc[t[i]-'a']++;    //a points to 0,b to 1,c to 2,.....so on
}
int anagram=1;
for (int i=0;i<26;i++)
 {
    if (slc[i]!=tlc[i])  //comparing frequency count
	 {
        anagram=0;
        break;
    }
}
if(anagram==0)
{
	printf("Not anagrams");
}
else
{
 printf("Anagrams");
}
return 0;
 }


