#include<stdio.h>

/*Write a program to print missing digite from serial integar number in an array.
Input will be till EOF.*/
int main () {
    int arr[100],count=0;
    int i=0;
    while(scanf("%d",&arr[i])!=EOF){
        count++;
        i++;
    }
    for(int i=1;i<=count;i++){
        if(arr[i]-arr[i-1]==2){
            if(arr[i]!=arr[i-1]+1){
                printf("%d\n",arr[i]-1);
            }
        }
        else if(arr[i]-arr[i-1]>2){
            int d;
            d=arr[i]-arr[i-1];
            for(int j=1;j<d;j++){
                arr[i-1]++;
                printf("%d\n",arr[i-1]);
            }
        }

    }
    return 0;
}



// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[i-1]+1){
//             printf("%d\n",arr[i]-1);
//         }
//     }
// 	return 0;
// }



// int main(){
//     int n;
//     printf("Enter the num: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1;i<n;i++){
//         if(arr[i]-arr[i-1]==2){
//             if(arr[i]!=arr[i-1]+1){
//                printf("%d\n",arr[i]-1);
//             }
//         }
//         else if(arr[i]-arr[i-1]>2){
//             int d;
//             d=arr[i]-arr[i-1];
//             for(int j=1;j<d;j++){
//                 arr[i-1]++;
//                 printf("%d\n",arr[i-1]);
//             }
//         }
//     }

//     return 0;
// }