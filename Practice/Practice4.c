#include<stdio.h>

//Write a C program to input a number and calculate the sum of its digits.

int main(){
    long long n,rem,sum=0;
    scanf("%lld",&n);
    if(n<0){
        n=n*(-1);
    }
    while(n>0){
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }

    printf("%lld\n",sum);
	return 0;
}
