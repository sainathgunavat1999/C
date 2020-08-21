/*
Copyright Sainath Gunavat
Designed to use ls(which I frequently use) command in windows just like linux.
Use gcc ls.c -o ls.exe
Place in C:\Windows\System32
*/

#include<stdio.h>
#include<dirent.h>
int main(){
	struct dirent *de;
	DIR *dr = opendir("."); 
  
    if (dr == NULL){ 
        printf("Could not open current directory" ); 
        return 0; 
    } 
  
    while ((de = readdir(dr)) != NULL) 
            printf("%s\n", de->d_name); 
  
    closedir(dr);
	return 0;
}