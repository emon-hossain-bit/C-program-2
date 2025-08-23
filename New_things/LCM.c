#include <stdio.h>

//Generating LCM using Euclidean algorithm.

int gcd_iterative(int a, int b);
int gcd_recursive(int a, int b);
int lcm(int a, int b);

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
     if (num1 == 0 || num2 == 0) {
        printf("The LCM of %d and %d is 0.\n", num1, num2);
    } else {
        long long result = lcm(num1, num2);
        printf("The LCM of %d and %d is %d.\n", num1, num2, result);
    }
    return 0;
}


int lcm(int a, int b){
    if(a==0 || b==0){
        return 0;
    }
    return (a/gcd_iterative(a,b))*b;
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
