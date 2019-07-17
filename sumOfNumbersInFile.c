#include <stdio.h>
int main() 
{
  FILE *filePointer;
  int sum=0,a;
  filePointer = fopen("file", "r");
  if (filePointer != NULL) 
  {
    printf("File opened successfully!\n");
  }
  else 
  {
    printf("Failed to open the file.\n");
    return -1;
  }
  while((a=getw(filePointer))!=EOF)
    sum+=a;
  printf("\nSum:%d",sum);
  fclose(filePointer);
  return 0;
}
