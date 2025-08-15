#include <stdio.h>

//Detecting if two numbers are different.

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((a ^ b)!=0){
        printf("They are different\n");
    }
    else{
        printf("They are same\n");
    }
    /*How it works: If two numbers are the same, every bit is identical → XOR result is 0.
    If they different, at least one bit will be different → XOR result is not 0. */
    return 0;
}