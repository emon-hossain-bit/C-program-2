#include<stdio.h>
#include<string.h>

//The GPTea problem.
 
int main(){
    char str1[]="East West University";
    char str2[100];
    gets(str2);
    int c;
    c=strcmp(str1,str2);
    if(c==0){
        printf("Correct\n");
    }
    else{
        printf("Hallucination\n");
    }
    return 0;
}

