#include<stdio.h>

void printnumbers(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printnumbers(arr, 6);

   
  
    return 0; 
}

void printnumbers(int arr[], int n){
     for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
     }
    printf("\n");
}



// void number(int arr[], int x);

// int main(){
//     int n;
//     printf("Enter nuber: ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];
//     for(int i=0;i<n;i++){
//         printf("%d number: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     number(arr,n);
    
//     return 0; 
// }

// void number(int arr[], int x){
//     for(int i=0;i<x;i++){
//         printf("%d\n",arr[i]);
//     }
// }



// int main(){
//     int n;
//     printf("Enter range: ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];
//     for(int i=0;i<n;i++){
//         printf("%d number: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
    
    
//     return 0;
// }
    
