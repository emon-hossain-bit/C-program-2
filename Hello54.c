#include<stdio.h>
#include<string.h>
//This is how strcat function works.

int main(){
    char firststr[100]="Hello ";
    char secstr[]="world";
    strcat(firststr,secstr);
    puts(firststr);
    puts(secstr);
   
    return 0; 
}
