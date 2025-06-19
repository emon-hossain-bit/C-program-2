#include<stdio.h>



int main(){
    int age = 22;
    int *ptr = &age;/*here (*) is called value at address of operator and 
                      (&) is called address of operator*/
    int _age = *ptr;

    //This is how print address.
    printf("%p\n",&age);

    printf("%p\n",ptr);
    printf("%p\n",&ptr);

    //This is how print value.
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    //Pointer to Pointer(A variable that stores the memory address of another pointer)
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;



    return 0;
}