#include<stdio.h>
#include<stdbool.h>
#include<math.h>

//Write a program in C to input a number and check whether the number is prime number or not.

bool isprime(int n);

int main(){
	int n;
	scanf("%d",&n);
	if(isprime(n)){
		printf("%d is prime.\n",n);
	}
	else{
		printf("%d is non-prime.\n",n);
	}
    
	return 0;
}

bool isprime(int x){
	if(x==1){
		return false;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			printf("Divisor: %d\n",i);
			return false;
		}
	}
	return true;
}


// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n,p=1;
//     scanf("%d",&n);
//     if(n<=1){
//         p=0;
//     }
//     else{
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0){
//                 p=0;
//                 break;
//             }
//         }
//     }
//     if(p==1){
//         printf("%d is a prime number.\n",n);
//     }
//     else{
//         printf("%d is not a prime number.\n",n);
//     }

    
//     return 0;
// }
 
