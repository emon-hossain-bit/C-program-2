#include<stdio.h>
int main(){
    int t,n,ind;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        ind=n+1;
        ind=ind/2;
        int age[100];
        for(int j=1;j<=n;j++){
            scanf("%d",&age[j]);
        }
        for(int j=1;j<=n;j++){
            if(j==ind){
                printf("Case %d: %d\n",i,age[j]);
            } 
        }
    }
    return 0;
}
