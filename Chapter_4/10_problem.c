#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int isPrime=1;
    for (int i=2;i<num;i++){
        if (num%i==0){
            // printf("The number %d is not a prime\n",num);
            isPrime=0;
            break;
        }
    }
    if (isPrime==0){
        printf("The number %d is not a prime\n",num);
    }
    else {
        printf("The number %d is a prime\n",num);
    }
}