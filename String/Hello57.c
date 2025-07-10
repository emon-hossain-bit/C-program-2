#include<stdio.h>
#include<string.h>
/*Find the salted form of a password entered by user if the 
salt is "123" & added at the end. */ 

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0; 
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password);// newpass = "test"
    strcat(newpass,salt);// newpass = "test" + "123"
    puts(newpass);
}



// void salting(char password[], char salt[]);

// int main(){
//     char password[100];
//     printf("Enter password: ");
//     fgets(password,200,stdin);
//     password[strcspn(password, "\n")] = '\0';
//     char salt[100];
//     printf("Enter salt: ");
//     fgets(salt,100,stdin);
//     salt[strcspn(salt, "\n")] = '\0';
//     salting(password,salt);
    
//     return 0;
// }

// void salting(char password[], char salt[]){
//     char newpass[200];
//     strcpy(newpass,password);
//     strcat(newpass,salt);
//     puts(newpass);
// }