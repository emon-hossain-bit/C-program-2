#include<stdio.h>

int main(){
    char *canchange="Hello World";/*If we initialize string like pointer then 
    we can change it whenever we want*/
    puts(canchange);
    canchange="Hello";
    puts(canchange);

    char cannotchange[]="Hello World";/*But if we initialize string like this it
    cannot be changed*/
    puts(cannotchange);
    strcpy(cannotchange, "Hello");
    puts(cannotchange);
    return 0; 
}