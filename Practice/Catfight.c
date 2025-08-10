#include<stdio.h>

//The Cat Fight problem.
 
int main(){
    int t,x=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                x++;
            }
        }
        if(n%2==0 && x!=0){
           printf("Draw\n");
        }
        else{
            printf("Kobutor\n");
        }

    }
    return 0;
}

