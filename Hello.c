# include<stdio.h>
# include<math.h>

int main() {
    //Write a program to print the average of 3 numbers.
    /* This is the program of finding average of any 3 numder */
    float x,y,z;
    printf("enter x =");
    scanf("%f", &x);
    printf("enter y =");
    scanf("%f", &y);
    printf("enter z =");
    scanf("%f", &z);
    float average = (x+y+z)/3;
    printf("The average = %f\n", average);
    return 0;
}