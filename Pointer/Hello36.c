#include<stdio.h>
/*Write a function to calculate the sum, product & average of 2 numbers.
Print that average in the main function.*/

void dowork(int a, int b, int *sum, int *prod, int *avg);

int main(){
   int a , b;
   int sum, prod , avg;
   printf("Enter a :");
   scanf("%d",&a);
   printf("Enter b :");
   scanf("%d",&b);

   dowork(a , b , & sum , & prod , & avg);
   printf("sum = %d\nprod =%d\navg =%d\n", sum, prod, avg);
   
    return 0;
}
  
void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
