#include<stdio.h>
#include<string.h>
/*Write a function to count the occurrence of vowels in a string.*/

int countvowels(char str[]);

int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("Vowels are : %d",countvowels(str));


    return 0;
}
    
int countvowels(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}
 