#include<stdio.h>
int main(){
    int t,n,rem;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int arr[10];
        for(int i=0;i<10;i++){
            arr[i]=0;
        }
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            int num=i;
            while(num>0){
               rem=num%10;
               arr[rem]++;
               num/=10;
            }      
        }
        int first=1;
        for(int i=0;i<10;i++){
            if(!first){
                 printf(" ");
            }
            printf("%d",arr[i]);
            first=0;
        }
        printf("\n");
    }
    return 0;
}
