#include<stdio.h>

//This is how to open and close a file.
 
int main(){
    FILE *fptr;
    fptr = fopen("hello70.txt","r");
    fclose(fptr);
    return 0;
}
 