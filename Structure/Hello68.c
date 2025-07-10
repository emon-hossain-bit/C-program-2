#include<stdio.h>
#include<string.h>
/*Make a structure to store Bank Account Information of a customer of ABC Bank.
Also, make an alias for it.*/

typedef struct Bankaccount{
    int accountno;
    char name[100];
}acc;

int main(){
    acc acc1 = {123,"Emon"};
    acc acc2 = {124,"Shible"};
    acc acc3 = {125,"Rupom"};
    
    printf("Account no = %d\n", acc1.accountno);
    printf("Name = %s\n", acc1.name);
    printf("Account no = %d\n", acc2.accountno);
    printf("Name = %s\n", acc2.name);
    printf("Account no = %d\n", acc3.accountno);
    printf("Name = %s\n", acc3.name);
    return 0;
}

