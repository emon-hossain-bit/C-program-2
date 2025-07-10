#include<stdio.h>

int main(){
    //Print the sum of first n natural numbers, also print them in reverse.
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i;
        
    }printf("sum is : %d\n",sum);
    for (int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    /*It can be execute without taking extra for loop */
    //  int n;
    // printf("Enter number:");
    // scanf("%d",&n);
    // int sum=0;
    // for (int i=1, j=n;i<=n && j>=1;i++,j--){
    //     sum=sum+i;
    //     printf("%d\n",j);    
    // }printf("sum is : %d\n",sum);


    //It can be execute like this.
    // int n;
    // printf("Enter number:");
    // scanf("%d",&n);
    // int sum=0;
    // for (int j=n;j>=1;j--){
    //     sum=sum+j;
    //     printf("%d\n",j);
        
    // }printf("sum is : %d\n",sum);
   
    
    








    return 0;
}