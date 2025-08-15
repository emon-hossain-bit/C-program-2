#include <stdio.h>

int main() {
   long int n;
   while(1){
    scanf("%ld",&n);
    if(n<0){
        break;
    }
    long long int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%lld\n",sum);
   }
    return 0;
}
