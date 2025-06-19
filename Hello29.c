#include<stdio.h>
#include<math.h>
/*Write a function to calculate Percentage of a student
from marks in Science, Math and English*/

int calcpercentage(int science, int math, int english);

int main(){
    int science,math,english;
    printf("Enter marks of science:");
    scanf("%d",&science);
    printf("Enter marks of math:");
    scanf("%d",&math);
    printf("Enter marks of english:");
    scanf("%d",&english);

    printf("Percentage is : %d", calcpercentage(science,math,english));



    return 0;
}

int calcpercentage(int science, int math, int english){
    return ((science + math + english)/3);
}