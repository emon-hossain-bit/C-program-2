#include<stdio.h>
#include<math.h>

int main(){
    int n,d;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n%2!=0){
            n-=1;
            d=n/2;
        }
        else{
        d=n/2;
        }
        if(d==0){
            d++;
        }
        printf("%d\n",d);

    }
    
    return 0;
}
