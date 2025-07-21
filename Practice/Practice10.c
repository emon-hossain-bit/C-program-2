#include<stdio.h>
#include<math.h>
 
//Write a C program to input two numbers from user and find LCM (Lowest Common Multiple).

int main(){
     int num1,num2,max,lcm,i;
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        max=num1;
    }
    else{
        max=num2;
    }
    i=max;
    while(1){
        if(i%num1==0 && i%num2==0){
          lcm=i;
          break;
        }
        i+=max;

    }
    printf("%d\n",lcm);
    return 0;
}


 