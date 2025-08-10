#include<stdio.h>
#include<ctype.h>

//The Interesting Message problem.
 
int main(){
    int n,l;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        int x=1;
        char str[100000];
        gets(str);
        for(int i=0;str[i]!='\0';i++){
            if(x%2!=0){
                str[i]=toupper(str[i]);
                x++;
            }
            else{
                str[i]=tolower(str[i]);
                x++;
            }
        }
        puts(str);
    }
    return 0;
}

