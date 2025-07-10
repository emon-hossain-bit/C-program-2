#include<stdio.h>
/*Write a function that prints Assalamo alaikom of user is Bangladeshi and
Bonjour if the user is French. */
void Assalamoalaikom();
void bonjour();

int main(){
    char ch;
    printf("Enter B for bangladeshi and f for french:");
    scanf("%c",&ch);
    if(ch=='B'){
        Assalamoalaikom();
    }else if(ch=='f') {
        bonjour();
    }else {
        printf("Not Valid");
    }

   
    return 0;
}

void Assalamoalaikom(){
     printf("Assalamo alaikom\n");
}

void bonjour(){
    printf("Bonjour\n");
}