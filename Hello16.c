#include<stdio.h>

int main(){
    //Print all the odd number from 5 to 50
    for(int i=5; i<=50; i++){
        if (i%2 !=0){
            printf("%d\n",i);
        }
    }
    
   
    return 0;
}