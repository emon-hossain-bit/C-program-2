#include<stdio.h>
#include<math.h>

int main(){
    float x;
    float pi;
    pi=acos(-1);
    printf("Enter the radius: ");
    scanf("%f",&x);
    printf("The area of the circle is: %.2f",x*x*pi);
    
    

    return 0;
}


