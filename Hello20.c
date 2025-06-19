#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter first number : ");
    scanf("%d",&b);
    int s =sum (a,b);
    printf("sum is : %d\n",s);

}

int sum (int x, int y){
    return x + y;
}