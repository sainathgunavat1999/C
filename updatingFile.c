#include <stdio.h>
#include <string.h>
#define MAX 256
int main() 
{
    int ctr = 0;
    char ch;
    FILE *fptr1, *fptr2;
    char str[MAX], temp[] = "temp.txt";		
    fptr1 = fopen("file", "r");
    if (!fptr1) 
	{
      printf(" File not found or unable to open the input file!!\n");
      return 0;
    }
    fptr2 = fopen(temp, "w"); 
    if (!fptr2) 
	{
      printf("Unable to open a temporary file to write!!\n");
      fclose(fptr1);
      return 0;
    }
    while (!feof(fptr1)) 
    {
      strcpy(str, "\0");
      fgets(str, MAX, fptr1);
      if (!feof(fptr1)) 
      {
         ctr++;
        /* skip the line at given line number */
         if (ctr != 3 && ctr!=6 && ctr!=9) 
         {
           fprintf(fptr2, "%s", str);
         }
       }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove("file");  		 
    rename(temp, "file"); 	
    fptr1=fopen("file","r"); 
    ch=fgetc(fptr1); 
    printf("Now the content of the file:"); 
    while(ch!=EOF) 
    { 
      printf("%c",ch); 
      ch=fgetc(fptr1); 
    }
    fclose(fptr1);
    return 0;
} 
