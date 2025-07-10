#include<stdio.h>
#include<math.h>
/*Modulo(%) only used for int, to use it in float we must include math.h,
then we have to use fmod function.*/

int main(){
    float x = 5.5,y = 2.0;
    float r = fmod(x,y);
    printf("%f\n",r);
    return 0;
}