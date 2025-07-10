#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n",number);
    



    return 0;
}

/*Call by value. Here we pass value of variable as argument. Here value has been copid.That why
value of number is not changed*/
void square(int n){
    n=n*n;
    printf("square =%d\n",n);
}

/*Call by reference. Here we pass address of variable as argument.Here value of number has changed.
Because we store the value of multiply in the same address.*/
void _square(int *n){
    *n = (*n) * (*n);
    printf("square = %d\n",*n);
}