#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {04,9.9,"Emon Hossain"};
    
    printf("Student name = %s\n",s1.name);
    printf("Student roll = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
    
    struct student *ptr = &s1;

    printf("Student name = %s\n",(*ptr).name);
    printf("Student roll = %d\n",(*ptr).roll);
    printf("Stuent cgpa = %f\n",(*ptr).cgpa);
   
    printf("Student name = %s\n",ptr->name);
    printf("Student roll = %d\n",ptr->roll);
    printf("Stuent cgpa = %f\n",ptr->cgpa);
   
   
   
    return 0;
}
