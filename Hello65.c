#include<stdio.h>
#include<string.h>
//Enter address (house no, block, city, state) of 2 people.

typedef struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
}add;

void printadd(struct address add);

int main(){
    add adds[2];
    
    printf("Enter info for person 1: ");
    scanf("%d",&adds[0].houseno);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d",&adds[1].houseno);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

   

    printadd(adds[0]);
    printadd(adds[1]);
    
    
    return 0;
}

void printadd(struct address add){
    printf("Address is : %d, %d, %s, %s\n",add.houseno, add.block, add.city, add.state);
}