#include<stdio.h>
#include<math.h>
/*Write a function to print n terms fo the fibonacci sequence with recursion.*/

void printfibonacci(int n, int a, int b);

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    printfibonacci(n, 0, 1);
    return 0;
}

void printfibonacci(int n, int a, int b) {
    if(n > 0) {
        printf("%d\n ", a);
        printfibonacci(n - 1, b, a + b);
    }
}


