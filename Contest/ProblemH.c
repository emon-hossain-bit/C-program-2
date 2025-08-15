#include<stdio.h>

int main(){
    int n,m,arr[200];
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i=0;i<200;i++){
            arr[i]=0;
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            arr[m]++;
        }
        int first=1;
        for(int i=0;i<200;i++){
            if(arr[i]>0){
                for(int j=1;j<=arr[i];j++){
                    if(!first){
                        printf(" ");
                    }
                    printf("%d",i);
                    first=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
