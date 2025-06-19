#include<stdio.h>
//Declaration/Prototype
void printHello();//frist declaration for function 1
void printGoodbye();//Second declaration for function 2

int main(){
//Function call
    printHello();//Call 1
    printGoodbye();//Call 2
    return 0;
}
//Function definition
//Function 1
void printHello(){
    printf("Hello!\n");
}
//Function 2
void printGoodbye(){
    printf("Goodbye:)\n");
}