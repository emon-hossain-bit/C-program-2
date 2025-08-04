#include<stdio.h>
#include<math.h>
 

int main () {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int n,k,fact=1,e,j;
        scanf("%lld %lld",&n, &k);
        for(int i=n;i>=1;i--){
            fact*=i;
        }
        j=1;
        while(1){
            e=(long int)pow(k,j);
            if(fact%e!=0){
                break;
            }
            j++;
        }
        printf("%d\n",j-1);

    }
  
    
    return 0;
}

