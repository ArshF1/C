#include <stdio.h>

int main(){
    int sum=0;
    int i=1;
    while (i<=10){
        int num;
        // printf("Enter a number: ");
        // scanf("%d",&num);
        sum=sum+i;
        i++;
    }
    printf("The sum is %d\n",sum);
    return 0;
}