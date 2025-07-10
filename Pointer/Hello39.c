#include<stdio.h>
//This is who increment and decrement operator works in pointer


int main(){
    int age = 22;
    int *ptr1 = &age;
    printf("ptr = %u\n",ptr1);
    ptr1++;
    printf("ptr = %u\n",ptr1);
    ptr1--;
    printf("ptr = %u\n",ptr1);
    ptr1--;
    printf("ptr = %u\n",ptr1);


    float price = 100.0;
    float *ptr2 = &price;
    printf("ptr = %u\n",ptr2);
    ptr2++;
    printf("ptr = %u\n",ptr2);
    ptr2--;
    printf("ptr = %u\n",ptr2);
    ptr2--;
    printf("ptr = %u\n",ptr2);


    char star = '*';
    char *ptr3 = &star;
    printf("ptr = %u\n",ptr3);
    ptr3++;
    printf("ptr = %u\n",ptr3);
    ptr3--;
    printf("ptr = %u\n",ptr3);
    ptr3--;
    printf("ptr = %u\n",ptr3);



    return 0; 
}


