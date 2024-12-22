#include <stdio.h>

int fibonacci(int);
int fibonacci(int num){
    if (num==1 || num==2){
        return num-1;
    }
    else if (num==0){
        return 0;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}

int main(){
    printf("The fibonacci is %d\n", fibonacci(7));
    return 0;
}