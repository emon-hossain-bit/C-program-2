#include<stdio.h>

//Diamond number pattern.

int main(){
    int n,space,num,mid;
    scanf("%d",&n);
    for(int line=1;line<=n;line++){
        space=n-line;
        for(int i=1;i<=space;i++){
            printf(" ");
        }
        num=line*2-1;
        mid=(num+1)/2;
        for(int i=1;i<=num;i++){
            if(i<=mid){
                printf("%d",i);
            }
            else if(i>mid){
                mid-=1;
                printf("%d",mid);
            }
        }
        printf("\n");
    }
    for(int line=1;line<=n-1;line++){
        for(int i=1;i<=line;i++){
            printf(" ");
        }
        num-=2;
        mid=(num+1)/2;
        for(int i=1;i<=num;i++){
            if(i<=mid){
                printf("%d",i);
            }
            else if(i>mid){
                mid-=1;
                printf("%d",mid);
            }
        }
        printf("\n");
    }
   
    return 0;
}
 
