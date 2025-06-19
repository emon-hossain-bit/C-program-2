#include<stdio.h>

int main(){
    /*Keep taking numbers as input from user until user enters an odd number.*/
    int n;
    do{
        printf("enter number :");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%2 !=0){
            break;//This is also a example of using break
        }
    }while (1);//It means true
    printf("Thank you");
    /*Keep taking numbers as input from user until user enters a number which is
    multiple of 7.*/
    // int n;
    // do{
    //     printf("enter number :");
    //     scanf("%d",&n);
    //     printf("%d\n",n);
    //     if (n%7 ==0){
    //         break;
    //     }
    // }while (1);//It means true
    // printf("Thank you");

    return 0;
}