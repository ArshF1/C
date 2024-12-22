#include <stdio.h>

int main(){
    int num;
    int factorial;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num==1 || num<1){
        printf("The factorial is 1");
    }
    else {
        factorial=1;
        for (int i=2;i<=num;i++){
            factorial=factorial*i;
        }
        printf("The factorial is %d\n",factorial);
    }
    return 0;
}