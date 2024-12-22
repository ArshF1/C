#include <stdio.h>

float avg(int,int,int);
float avg(int num1, int num2, int num3){
    float avg;
    avg=(num1+num2+num3)/3.0;
    printf("The average is %.2f\n", avg);
    return avg;
}

int main(){
    avg(3,5,4);
    return 0;
}