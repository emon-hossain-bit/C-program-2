# include<stdio.h>
# include<math.h>

int main() {
  /*write a program to give grades to a student if marks <30 is C, 
  30<=marks<70 is B, 70<=marks<90 is A, 90<=marks<=100 is A+*/
    int marks;
    printf("enter marks =");
    scanf("%d", &marks);
    if (marks >=0 && marks< 30)
    {
    printf("C\n");
    }
    else if (marks >=30 && marks< 70)
    {
    printf("B\n");
    }
    else if (marks >=70 && marks<90)
    {
    printf("A\n");
    }
    else if (marks>=90 && marks<=100)
    {
    printf("A+\n");
    } else {
      printf("WORNG NUMBER");
    }
    
    
    
    
    
    
    
        
    
    

    
    
 
  
   
    
    return 0;
}