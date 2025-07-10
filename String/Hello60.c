#include<stdio.h>
#include<string.h>
/*Check if a given character is present in a string or not.*/

void checkchar(char str[], char ch);

int main(){
    char str[] = "Emon Hossain";
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    checkchar(str,ch);


    return 0;
}
    
void checkchar(char str[], char ch){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Character is present :)");
            return;
        }
    }
    printf("Character is not present :(");
}