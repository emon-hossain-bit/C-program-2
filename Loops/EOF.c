#include<stdio.h>

/*This program will take two number and give you sum of those two number until 
you inter ctrl+z(EOF(end of file)).*/

int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF){
        printf("Sum: %d\n",x+y);
    }
   
    return 0;
}
 
