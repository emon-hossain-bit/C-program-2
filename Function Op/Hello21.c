#include<stdio.h>
void printtable (int z);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printtable(n);
    return 0;
}

void printtable (int x){
    for (int i=1;i<=10;i++){
        printf("%d\n",x*i);
    }
}