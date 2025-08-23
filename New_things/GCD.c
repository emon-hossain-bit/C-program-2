#include <stdio.h>

//Euclidean algorithm to generate GCD of two numbers.

int gcd_iterative(int a, int b);
int gcd_recursive(int a, int b);

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int r=gcd_recursive(num1,num2);
    printf("The GCD of %d and %d is %d.\n",num1,num2,r);
  
    return 0;
}


int gcd_iterative(int a, int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    //When the loop terminates, a holds the GCD.
    return a;
}
int gcd_recursive(int a, int b){
    if(b==0){
        return a;
    }
    else{
        gcd_recursive(b,a%b);
    }
}
