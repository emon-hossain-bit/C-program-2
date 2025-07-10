#include<stdio.h>
//Write a function to count the number of odd numbers in an array.

int countOdd(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d", countOdd(arr,6));
    
   
  
    return 0; 
}

int countOdd(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}




// int odd(int arr[], int n);

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];
//     for(int i=0,j=1;i<n, j<=n;i++,j++){
//         arr[i]=j;
//     }
//      printf("There are %d numbers of odd number.",countodd(arr,n));
    
//     return 0; 
// }

// int odd(int arr[], int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     return count;
// }