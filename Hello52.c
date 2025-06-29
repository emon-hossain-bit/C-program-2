#include<stdio.h>
#include<string.h>
//Make a program that inputs user's name & prints its length without loop. But with strlen function.
//This is how strlen function works.
int countlength(char arr[]);

int main(){
    //char name[]="Emon";
    char name[100];
    fgets(name,100,stdin);/*When you use fgets(name, 100, stdin); to input a string,
     it reads the newline character (\n) when you press Enter.
      So, if you type emon and press Enter, name actually contains:'e' 'm' 'o' 'n' '\n' '\0'.
      */
    int length= strlen(name);/*This strlen function count characters except '\0'.
    That is why we have to add -1 to cut '\n' */
    printf("Length is: %d", length-1);
   
    return 0; 
}

int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}