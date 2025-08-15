#include<stdio.h>
#include<math.h>

int main(){
    int t;
    double l,w,r,pi,red,green;
    pi= acos(-1.0);
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%lf",&l);
        w=l*(6.0/10);
        r=l*(1.0/5.0);
        red=r*r*pi;
        green=l*w-red;
        printf("%.2f %.2f\n",red,green);
    }
    return 0;
}
