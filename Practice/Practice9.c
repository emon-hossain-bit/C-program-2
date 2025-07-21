#include<stdio.h>
#include<math.h>

//Write a C program to find GCD(Greatest Common Divisor) of two numbers.
 
int main(){
    int n1,num,n2,min;
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        min=n2;
    }
    else{
        min=n1;
    }
    for(int i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
            num=i; 
        }
    }
    printf("%d\n",num);
   
    return 0;
}
 
