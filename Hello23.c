#include<stdio.h>
#include<math.h>
void printhello();
void Goodbye();
void Salam();
void Bonjour();
int sum(int a, int b);
void table(int n);
void calprice(float value );
int main(){
    int n=4;
    printf("%f",pow(n,2));
    
    

    return 0;
}


void printhello(){
    printf("Hello\n");
}

void Goodbye(){
    printf("Good bye\n");
}

void Salam(){
    printf("Assalamo alaikom\n");
}

void Bonjour(){
    printf("Bonjour\n");
}

int sum(int a, int b){
    return a+b;
}

void table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}

void calprice(float value){
    value=value + (0.18*value);
    printf("Final price is:%f",value);
}