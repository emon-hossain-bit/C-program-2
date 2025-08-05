#include<stdio.h>
#include<string.h>

/*Write a program to find ones and twos complement of a binary number.*/

int main(){
    int n;
    scanf("%d",&n);
    char binary[n+1],onecom[n+1],twocom[n+1];
    int carry=1;
    int i;
    scanf("%s",binary);
    for(i=0;i<n;i++){
        if(binary[i]=='1'){
            onecom[i]='0';
        }
        else if(binary[i]=='0'){
            onecom[i]='1';
        }
    }
    onecom[n]='\0';
    puts(onecom);
    for(int i=n-1;i>=0;i--){
        if(onecom[i]=='1' && carry==1){
            twocom[i]='0';
        }
        else if(onecom[i]=='0' && carry==1){
            twocom[i]='1';
            carry=0;
        }
        else{
            twocom[i]=onecom[i];
        }
    }
    twocom[n]='\0';
    puts(twocom);


    return 0;
}

