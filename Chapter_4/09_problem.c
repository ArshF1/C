#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num==1 || num<1){
        printf("The factorial is 1\n");
    }
    else {
        int i=2;
        int factorial=1;
        while (i<=num){
            factorial=factorial*i;
            i++;
        }
        printf("The factorial is %d\n",factorial);
    }
}