#include <stdio.h>

int sum(int);
int sum(int n){
    if (n==1){
        return n;
    }
    return n+sum(n-1);
}

int main(){
    printf("The sum of first 3 natural number is %d\n",sum(5));
    return 0;
}