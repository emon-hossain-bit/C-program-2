# include<stdio.h>
# include<math.h>
int main() {
    /*Write a c program to find if a character entered by user is upper case or not*/
    char cha;
    printf("enter character :");
    scanf("%c", &cha);

    if (cha >= 'A' && cha <= 'Z')
    {
    printf("Upper case \n");
    }
    else if (cha >= 'a' && cha <= 'z')
    {
    printf("Lower case \n");
    } else {
        printf("Not english letter \n");
    }
    
    
    
 
  
   
    
    return 0;
} 