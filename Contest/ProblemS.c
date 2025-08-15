#include<stdio.h>
#include<string.h>

int main(){
    char input[100];
    int i=1;
    while(1){
        gets(input);
        if(input[0]=='*'){
            break;
        }
        char h[100]= "Hajj";
        char u[100]= "Umrah";
        int a=strcmp(h,input);
        int b=strcmp(u,input);
        if(a==0){
           printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else{
           printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
   
    return 0;
}
