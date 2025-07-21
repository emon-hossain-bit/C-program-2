#include<stdio.h>

//Write a C program to input a number and count how many digits it has .

int main(){
    long long n,count=0;
    scanf("%lld",&n);
    if(n==0){
        count++;
    }
    else{
        if(n<0){
            n=n*(-1);
        }
        while(n>0){
            n/=10;
            count++;
        }
    
    }
    printf("%lld\n",count);
    
	return 0;
}
