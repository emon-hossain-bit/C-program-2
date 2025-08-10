#include<stdio.h>

//The researcher Levi problem.
 
int main(){
    int t,n,k,x,a,sit;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int c=0;
        scanf("%d %d %d",&n,&k,&x);
        sit=n*x;
        for(int i=1;i<=k;i++){
            scanf("%d",&a);
            if(a>sit){
                c++;
            }

        }
        if(c==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
 