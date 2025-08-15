#include<stdio.h>
int countlength(long long int n);
int main(){
    int a,b;
    int max=0,r;
    scanf("%d %d",&a,&b);
    if(b>a){
        for(int i=a;i<=b;i++){
        r=countlength(i);
        if(r>=max){
            max=r;
        }
        }
        printf("%d %d %d\n",a,b,max);
    }
    else{
        for(int i=a;i>=b;i--){
        r=countlength(i);
        if(r>=max){
            max=r;
        }
        }
        printf("%d %d %d\n",a,b,max);
    }
    return 0;
}
int countlength(long long int n){
    int count=0;
    while(1){
        count++;
        if(n==1){
            break;
        }
        if(n%2!=0){
            n=3*n+1;
        }
        else{
            n=n/2;
        } 
    }
    return count;
}
