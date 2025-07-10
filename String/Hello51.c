#include<stdio.h>
//Make a program that inputs user's name & prints its length.

int countlength(char arr[]);

int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("Length is: %d",countlength(name));
   
    return 0; 
}

int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]== ' '|| arr[i] == '\n'){
            continue;
        }
        count++;
    }
    return count;
}





// #include<stdio.h>
// #include<string.h>
// //Make a program that inputs user's name & prints its length.

// int countlength(char arr[]);

// int main(){
//     char name[]="Emon";
//     int length= strlen(name);
//     printf("Length is: %d", length);
   
//     return 0; 
// }

// int countlength(char arr[]){
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count-1;
// }