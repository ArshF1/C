#include <stdio.h>

int main(){
    int num=97;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int isDivisible=n%num;
    if (isDivisible==0){
        printf("The number %d is divisible\n",n);
    }
    else {
        printf("The number is %d not divisible\n",n);
    }
    return 0;
}