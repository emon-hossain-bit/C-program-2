#include<stdio.h>

//The cricket problem.
 
int main(){
    int n,countm=0,counts=0,j=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int arr[6];
        for(int i=0;i<6;i++){
            arr[i]=0;
        }
        for(int i=0;i<6;i++){
            scanf("%d",&arr[i]);
            if(j%2!=0){
                countm+=arr[i];
                if(arr[i]%2!=0){
                    j++;
                }
            }
            else if(j%2==0){
                counts+=arr[i];
                if(arr[i]%2!=0){
                    j++;
                }
            }
        }
        j++;
    }
    if(counts>=countm){
        printf("Happy:)\n");
        printf("%d %d\n",countm,counts);
    }
    else{
        printf("Sad:(\n");
        printf("%d %d\n",countm,counts);
    }
    return 0;
}


// int main(){
//  int n,countm=0,counts=0,j=1,r;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=6;i++){
//             scanf("%d",&r);
//             if(j%2!=0){
//                 countm+=r;
//                 if(r%2!=0){
//                     j++;
//                 }
//             }
//             else if(j%2==0){
//                 counts+=r;
//                 if(r%2!=0){
//                     j++;
//                 }
//             }
//         }
//         j++;
//     }
//     if(counts>=countm){
//         printf("Happy:)\n");
//         printf("%d %d\n",countm,counts);
//     }
//     else{
//         printf("Sad:(\n");
//         printf("%d %d\n",countm,counts);
//     }
// }

