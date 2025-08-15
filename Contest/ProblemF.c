#include <stdio.h>

int main() {
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }

    }
    return 0;
}
