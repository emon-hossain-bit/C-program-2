#include<stdio.h>
#include<math.h>
#include<string.h>

void inputarr(int n);
void inputarrtn(int n);
void outputarr(int arr[], int n);
int countOdd(int arr[],int n);
void reverse(int arr[],int n);
void sfibonacci(int n);
void outputstring(char arr[]);
int countlength(char arr[]);
int countvowels(char str[]);
void checkchar(char str[], char ch);

int main(){
    char name[100];
    fgets(name,100,stdin);
    countlength(name);


    return 0;
}

void inputarr(int n){
     int arr[n];
     int *ptr=&arr[0];
    for(int i=0;i<n;i++){
        printf("%d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    
}


void inputarrtn(int n){
    int arr[n];
    int *ptr=&arr[0];
    for(int i=0,j=1;i<n,j<=n;i++,j++){
        arr[i]=j;
    }
   
}
   

void outputarr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}


int countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    //return count;
    printf("There are %d numbers of odd number.",count);
}


void reverse(int arr[], int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
    
}


void sfibonacci(int n){
    int arr[n];
    int *ptr=&arr[0];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    
}


void outputstring(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}


int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]== ' ' || arr[i]=='\n'){
            continue;
        }
        count++;
    }
    printf("Length is: %d",count);
}


int countvowels(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| 
        str[i]=='u'){
            count++;
        }
    }
    printf("There are %d number of vowels.",count);
}


void checkchar(char str[], char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Character is present here :)");
            return;
        }
    }
    printf("Character is not present :(");
}
