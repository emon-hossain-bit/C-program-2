#include<stdio.h>

//Write a program to write all the odd numbers from 1 to n in a file.

int main(){
    FILE *fptr;
    fptr = fopen("hello81.txt","w");

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }

   

   
    fclose(fptr);

    return 0;

}