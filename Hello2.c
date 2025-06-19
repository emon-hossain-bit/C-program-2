# include<stdio.h>
# include<math.h>
int main() {
    //Write a program to print the smallest number of two.
    /*This is the program to find the smallest between 2 numbers*/
     int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);


    // Compare the numbers and print the smallest
    if (num1 < num2) {
        printf("The smallest number is: %d\n", num1);
    } else if (num2 < num1) {
        printf("The smallest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

  
    
 
  
   
    
    return 0;
} 