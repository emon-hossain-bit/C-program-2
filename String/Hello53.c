#include<stdio.h>
#include<string.h>
//This is how strcpy function works.

int main(){
    char oldstr[]="oldstr";
    char newstr[]="newstr";
    strcpy(newstr,oldstr);
    puts(newstr);
   
    return 0; 
}