//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1,*f2;
  char c;
  f1=fopen("source.txt","r");
  if(f1==NULL)
  {
	printf("Source file could not be opened.");
	exit(1);
  }
  f2=fopen("destination.txt","w");
  if (f2==NULL)
  {
        printf("Destination file could not be opened.");
        fclose(f1);
        exit(1);
  while((c=fgetc(f1))!= EOF)
  {
   fputc(c,f2);
  }}
  printf("Successfully copied source file into destination file");
  fclose(f1);
  fclose(f2);
  return 0;
}
