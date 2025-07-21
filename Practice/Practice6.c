#include<stdio.h>
#include<math.h>

//Write a C program to input a number from user and find first and last digit of the number.
 
int main(){
    int n,count=0,rem,fir,las;
    scanf("%d",&n);
    if(n<0){
        n*=(-1);
    }
    else if(n==0){
        count++;
    }
    while(n>0){
        rem=n%10;
        count++;
        if(count==1){
           las=rem;
        }
        n/=10;

    }
    fir=rem;
    if(count==1){
        printf("Only one digit here.\n");
    }
    else{
        printf("%d\n",fir);
        printf("%d\n",las);
    }
   
    return 0;
}
 


// int main(){
//     int n,fir,las,digit;
//     scanf("%d",&n);
//     if(n<0){
//         n*=(-1);
//     }
//     las=n%10;
//     digit=log10(n);
//     fir=n/pow(10,digit);
//     printf("%d\n%d\n",fir,las);





//     return 0;
// }
