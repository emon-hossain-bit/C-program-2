#include<stdio.h>

/*Where when i input n and press inter it leaves the '\n'. This '\n' read the getchar() function 
so that gets() can work as i want.*/

int main(){
    char name[100],n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        gets(name);
        printf("Name: %s\n",name);
    }


    return 0;
}

