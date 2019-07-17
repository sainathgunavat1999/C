#include <stdio.h>
int main() 
{
  FILE *filePointer;
  int num;
  filePointer = fopen("file", "r");
    if (filePointer != NULL) {
    printf("File opened successfully!\n");
  }
  else {
    printf("Failed to open the file.\n");
    return -1;
  }
  printf("\nNumbers:\n");
  while ( (num = getw(filePointer)) != EOF ) {
    printf("%d\n", num);
  }
  fclose(filePointer);
  return 0;
}
