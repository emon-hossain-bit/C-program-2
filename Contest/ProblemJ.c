#include<stdio.h>
#include<math.h>

int main(){
     int n,d;
    int i=1;
    while(1){
        scanf("%d",&n);
        int count=0;
        if(n<0){
            break;
        }
        int r=1;
        for(int i=1;i<=n;i++){
            if(i>r){
                count++;
                r*=2;
            }
        }
        printf("Case %d: %d\n",i,count);
        i++;
    }
    
    return 0;
}
