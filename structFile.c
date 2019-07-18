#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll;
} s;
int main()
{
    FILE *filePointer;
    int choice;
    printf("\n1.Insert\n2.Display");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter information of students:\n");
        printf("\nEnter roll number:");
        scanf("%d",&s.roll);
        printf("Enter name: ");
        scanf("%s",s.name);
        filePointer=fopen("studentfile","w");
        fwrite (&s, sizeof(struct student), 1, filePointer);
        if(fwrite != 0)  
            printf("Contents to file written successfully.\n"); 
        else 
            printf("Error writing file\n"); 
        fclose(filePointer);
        break;
    case 2:
        filePointer=fopen ("studentfile", "r"); 
        if (filePointer == NULL) 
        { 
            fprintf(stderr, "\nError opening file\n"); 
            exit (1); 
        } 
        while(fread(&s, sizeof(struct student), 1, filePointer)) 
        printf("Name = %s \nRoll Number:%d", s.name,s.roll); 
        fclose(filePointer); 
        break;
    default:
        break;
    }
    return 0;
}
