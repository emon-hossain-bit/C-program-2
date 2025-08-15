#include<stdio.h>
int main(){
    int t;
    double c,f,d,nc,nf;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%lf %lf",&c,&d);
        nf=(9.0/5.0)*c+32;
        nf=nf+d;
        nc=(nf-32)*(5.0/9.0);
        printf("Case %d: %.2lf\n",i,nc);
    }
    return 0;
}
