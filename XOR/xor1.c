#include <stdio.h>

//Swapping two variables without a extra variable by XOR.

int main() {
    int a=5,b=3;
    a = a ^ b;//it can be b ^ a.
    b = a ^ b;//it can be b ^ a.
    a = a ^ b;//it can be b ^ a.
    printf("%d %d\n",a,b);
    /*How it works: XOR is reversible. Applying XOR twice the same
    number gets you back the original number.*/
    return 0;
}