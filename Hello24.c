#include<stdio.h>
#include<math.h>
//Write functions to calculate area of a square, a circle and rectangle.

float square(float side);
float circle(float rad);
float rectangle( float a,float b);

int main(){
    float a=5.0;
    float b=10.0;

    printf("area is:%f",rectangle(a,b));


    return 0;
}

float square(float side){
    return side* side;
}

float circle(float red){
    return 3.1416*red*red;
}

float rectangle(float a, float b){
    return a*b;
}