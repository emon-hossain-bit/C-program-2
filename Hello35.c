#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x = 3, y = 5;
    swap(x,y);
    printf("x = %d & y = %d\n", x,y);

    _swap(&x,&y);
    printf("x = %d & y = %d\n", x,y);


    

   
  
    return 0;
}

//Call by value 
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a,b);
}

//Call by reference
void _swap(int *a ,int *b){
    int t = *a;
    *a = *b;
    *b = t;
     printf("a = %d & b = %d\n", *a,*b);
}