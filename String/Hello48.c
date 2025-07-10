#include<stdio.h>

void name(char arr[]);

int main(){
    char firstname[]="Emon";
    char lastaname[]="Hossain";

    name(firstname);
    name(lastaname);

    return 0; 
}

void name(char arr[]){
    for(int i=0; arr[i]!='\0' ;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}