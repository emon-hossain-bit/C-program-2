#include<stdio.h>
//Write a program to enter price of 3 items & print their final cost with gst.
int main(){
    float price[3];
    printf("Enter 3 prices : ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price 1 : %f\n", price[0]+(0.18*price[0]));
    printf("Total price 2 : %f\n", price[1]+(0.18*price[1]));
    printf("Total price 3 : %f\n", price[2]+(0.18*price[2]));
    
    
     

   
  
    return 0;
}




// float price[3];
//     float *ptr=&price[0];
//     for(int i=0;i<3;i++){
//         printf("Item %d: ",i+1);
//         scanf("%f",&price[i]);
//     }
//     for(int i=0;i<3;i++){
//         printf("Final price of item %d: %f\n",i+1,price[i]+(0.18*price[i]));
//     }
