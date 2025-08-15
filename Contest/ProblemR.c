#include<stdio.h>
int main(){
    int t;
    int a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>0 && b>0 && c>0 && (long long) a+b>c && (long long) b+c>a && (long long) c+a>b){
            if(a==b && b==c){
                printf("Case %d: Equilateral\n",i);
            }
            else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)){
                printf("Case %d: Isosceles\n",i);
            }
            else{
                printf("Case %d: Scalene\n",i);
            }
        }
        else{
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
