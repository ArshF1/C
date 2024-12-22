#include <stdio.h>

int factorial(int);
int factorial(int num){
    if (num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){
    printf("The factorial of 5 is %d\n",factorial(5));
    return 0;
}