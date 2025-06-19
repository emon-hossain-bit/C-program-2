# include<stdio.h>
# include<math.h>
int main() {
    /*This is the program to identify positive,negative,even and odd.
    This is also an example of nested (if inside if) if. */
     int number;
    printf("enter number =");
    scanf("%d", &number);
    if (number >= 0)
    {
    printf("positive \n");
       if (number % 2 == 0)
       {
        printf("even \n");
       } else {
              printf ("odd \n");
       }
       
    } else {
        printf ("negative \n");
    }
    
 
  
   
    
    return 0;
} 