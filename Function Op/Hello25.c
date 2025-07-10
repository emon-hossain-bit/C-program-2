#include<stdio.h>

void printhw(int count);

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printhw(n);



    return 0;
}

//recursive function(it call itself again and again)
void printhw(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printhw(count-1);
}