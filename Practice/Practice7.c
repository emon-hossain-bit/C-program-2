#include<stdio.h>
#include<math.h>
 
//Write a C program to input a number from user and swap first and last digit of the given number.
 
int main(){
    int n,fir,las,digit,swn;
    scanf("%d",&n);
    if(n<0){
        n*=(-1);
    }
    las=n%10;
    digit=log10(n);
    fir=n/pow(10,digit);
    swn=las*pow(10,digit);
    swn=swn+n%((int)pow(10,digit));
    swn=swn-las;
    swn=swn+fir;
    printf("%d\n",swn);

    return 0;
}


 