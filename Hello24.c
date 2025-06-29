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





// #include<stdio.h>
// #include<math.h>
// //Write functions to calculate area of a square, a circle and rectangle.
// float square(float side);
// float circle(float rad);
// float rectangle(float a, float b);


// int main(){
//     float side, red, a, b;
//     printf("Enter side of square: ");
//     scanf("%f",&side);
//     printf("Enter radious of circle: ");
//     scanf("%f",&red);
//     printf("Enter a of rectangle: ");
//     scanf("%f",&a);
//     printf("Enter b of rectangle: ");
//     scanf("%f",&b);
//     square(side);
//     circle(red);
//     rectangle(a,b);
    
    
//     return 0; 
// }

// float square(float side){
//     printf("Area of square: %f\n",side*side);
// }

// float circle(float red){
//     printf("Area of circle: %f\n",red*red*3.1416);
// }

// float rectangle(float a, float b){
//     printf("Area of rectangle: %f\n",a*b);
// }
