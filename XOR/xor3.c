#include <stdio.h>

//Toggling specific bits.

int main() {
    int n = 5;// 0101
    n = n ^ 1;// 0001 toggle the last bit -> becomes 0100 (4);
    printf("%d\n",n);
    /*How it works: XOR with 1 flips that bit, XOR with 0 keeps it the same.*/
    return 0;
}