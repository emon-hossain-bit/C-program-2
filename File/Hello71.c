#include<stdio.h>

//Check if a file exists before reading from it.
 
int main(){
    FILE *fptr;
    fptr = fopen("Newtest.txt","r");
    if(fptr == NULL){
        printf("File does not exist\n");
    }
    else{
        fclose(fptr);
    }
    
    return 0;
}
 