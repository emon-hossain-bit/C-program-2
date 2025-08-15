#include <stdio.h>

/*Finding the single unique number in a list or odd occurring numbers in a array.*/

int main() {
    int arr[] = {2, 3, 5, 3, 2};
    int result = 0;
    for (int i = 0; i < 5; i++) {
    result ^= arr[i];
    }
    printf("Unique number: %d\n", result);
    /*How it works: XOR all elements in an arry where all numbers except one 
    appear even times. XOR cancels pairs, leaving the odd one.
    The duplicates (2 and 3) canceled each other out because:
    2 ^ 2 = 0
    3 ^ 3 = 0
    0 ^ 5 = 5
    It means if any array contains elements even times except one element(odd times) 
    that one will be the unique number and this program will find that.*/

    return 0;
}