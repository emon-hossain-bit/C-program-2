#include<stdio.h>
#include<math.h>

//Write a C program to input a number from user and find reverse of the given number.
 
int main(){
    int n,rem,reverse=0;
    scanf("%d",&n);
    if(n<0){
        n*=(-1);
    }
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }   
    printf("%d\n",reverse);

   
    return 0;
}
 
