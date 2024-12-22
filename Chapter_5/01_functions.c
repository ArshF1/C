#include <stdio.h>

// Methods
int sum(int, int); // Function prototype

// Function definition
int sum(int n1,int n2){
    int total=n1+n2;
    printf("The sum of %d and %d is %d\n", n1,n2,total);
    return total;
}

void good_morning();
void good_morning(){
    printf("Good Morning");
}

int main(){
    int num=sum(2,3);
    printf("The return value of the sum function is %d\n",num);
    good_morning();
    return 0;
}
