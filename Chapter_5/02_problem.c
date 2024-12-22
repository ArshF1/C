#include <stdio.h>

int cTof(int);
int cTof(int temp){
    float fahrenheit=(temp*9/5.0)+32;
    printf("The temperature if F is %f\n",fahrenheit);
    return fahrenheit;
}

int main(){
    cTof(37);
    return 0;
}