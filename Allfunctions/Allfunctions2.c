#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int reversenum(int n);
int countdigit(int n);
int sumofdigit(int n);
bool checkprime(int n);
void printprime(int n);
int sumprime(int n);
void primefactor(int n);
void firlasdigit(int n);
int swapfirlasdigit(int n);
void palindrome(int n,int reverse);
int GCD(int a,int b);
int LCM(int a,int b);
 
int main(){
    int n;
    scanf("%d",&n);
    primefactor(n);
    return 0;
}
 
int reversenum(int n){
    int rem,reverse=0;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    return reverse;
}
 

int countdigit(int n){
    int count=0;
    if(n==0){
        count++;
    }
    while(n>0){
        n/=10;
        count++;

    }
    return count;
}


int sumofdigit(int n){
    int sum=0,rem;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    return sum;
}


bool checkprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}


void printprime(int n){
    for(int i=1;i<=n;i++){
        if(checkprime(i)){
            printf("%d ",i);
        }
    }
}


int sumprime(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(checkprime(i)){
            sum=sum+i;
        }

    }
    return sum;
}


void primefactor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(checkprime(i)){
                printf("%d ",i);
            }
        }
    }
}


void firlasdigit(int n){
    int first,last,digit;
    last=n%10;
    digit=log10(n);
    first=n/((int)pow(10,digit));
    printf("First digit: %d\nLast digit: %d",first,last);

}


int swapfirlasdigit(int n){
    int first,last,swapnum,digit;
    last=n%10;
    digit=log10(n);
    first=n/pow(10,digit);
    swapnum=last*pow(10,digit);
    swapnum=swapnum+n%((int)pow(10,digit));
    swapnum=swapnum-last;
    swapnum=swapnum+first;
    return swapnum;
}


void palindrome(int n,int reverse){
    if(n==reverse){
        printf("Palindrom.\n");
    }
    else{
        printf("Not Palindrom.\n");
    }

}


int GCD(int a,int b){
    int min,di;
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            di=i;
        }
    }
    return di;

}


int LCM(int a,int b){
    int max,multi,i;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    i=max;
    while(1){
        if(i%a==0 && i%b==0){
            multi=i;
            break;
        }
        i+=max;
    }
    return multi;

}