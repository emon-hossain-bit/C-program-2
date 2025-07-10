#include<stdio.h>
#include<string.h>
//This is how strcmp function works.

int main(){
    char firststr[100]="Apple ";
    char secstr[]="Banana";
    printf("%d",strcmp(firststr,secstr));
   //Because A=65<B=66
    return 0; 
}
