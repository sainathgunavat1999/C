#include <stdio.h>
int main() 
{
  FILE *filePointer;
  int num,i=0;
  filePointer = fopen("file", "w");
    if (filePointer != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    return -1;
  }
  printf("Enter 10 numbers:");
  for ( i = 0; i < 10; i++)
  {
    scanf("%d", &num);
    putw(num, filePointer);
  }
  
  fclose(filePointer);
  return 0;
}
