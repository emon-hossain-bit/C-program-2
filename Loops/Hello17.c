#include<stdio.h>

int main(){
    //Print the factorial of a number n.
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n; i++){
        fact=fact*i;
    }
    printf("final factorial is %d",fact);
   
    return 0;
}