#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main(){
    struct student s1 = {04,9.9,"Emon Hossain"};
    
    printinfo(s1);//This is call by value

    return 0;
}

void printinfo(struct student s1){
    printf("Student information : \n");
    printf("Student name = %s\n",s1.name);
    printf("Student roll = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
}
