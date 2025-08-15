#include<stdio.h>

int main(){
    int t,r,length,width,right,left;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&r);
        length=r*5;
        width=r*3;
        right=55*(length/100);
        left=45*(length/100);
        printf("Case %d:\n",i);
        printf("%d %d\n",-left,width/2);
        printf("%d %d\n",right,width/2);
        printf("%d %d\n",right,-width/2);
        printf("%d %d\n",-left,-width/2);
    }
    return 0;
}
