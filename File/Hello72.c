#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello72.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);


    fclose(fptr);
    return 0;
}