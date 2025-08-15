#include<stdio.h>
#include<math.h>

int main() {
    int a,b,r;
    while(1){
        int count=0;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0){
            break;
        }
        for(int i=a;i<=b;i++){
            r=sqrt(i);
            if(r*r==i){
                count++;
            }

        }
        printf("%d\n",count);

    }
    return 0;
}
