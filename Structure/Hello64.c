#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;



int main(){
    coe s1;
    s1.roll = 04;
    s1.cgpa = 9.9;
    strcpy(s1.name,"Emon Hossain");
    
    printf("Student name is: %s\n",s1.name);

    return 0;
}
