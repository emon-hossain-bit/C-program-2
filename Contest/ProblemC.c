#include <stdio.h>

int main() {
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        int count=0;
        for(int i=1;i<m;i++){
            count++;
        }
        for(int i=1;i<=m;i++){
            for(int i=1;i<n;i++){
                count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
