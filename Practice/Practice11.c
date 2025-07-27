#include<stdio.h>

int main(){
    int n,age,arr[1000],arry[1000],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&age);
        arr[i]=age;
    }
    for(int i=0;i<1000;i++){
        arry[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=18){
            count++;
            arry[arr[i]]++;
        }
    }
    printf("Eligiable: %d People\n",count);
    printf("Age: \n");
    for(int i=0;i<1000;i++){
        if(arry[i]>0){
            printf("%d ",i);
        }
    }
   
    return 0;
}
 
