#include<stdio.h>

//Write a C program to check if a number is Palindrome or not.

int main(){
    int n,num,reverse,rem;
    scanf("%d",&n);
    num=n;
    reverse=0;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(num==reverse){
        
        printf("Palindrome\n");
    }
    else{
        printf("It is not a Palindrome.\n");
    }
   
	return 0;
}
