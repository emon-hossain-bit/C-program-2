#include<stdio.h>
/* We can also subtract one pointer from another.
We can also compare 2 pointers.*/


int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n%u\ndifference = %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
     

   
  
    return 0; 
}


