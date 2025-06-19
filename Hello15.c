#include<stdio.h>

int main(){
    //Print all numbers from 1 to 10 except for 6.
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;//mean skip this only 6 then continue.
        }
        printf("%d\n",i);
    }
    
   
    return 0;
}