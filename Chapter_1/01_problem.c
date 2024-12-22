#include <stdio.h>

// Write a program to calculate area of a rectangle using hardcoded values
int main(){
    int length;
    int breadth;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breadth: ");
    scanf("%d",&breadth);
    int area=length*breadth;
    printf("The area of rectangle with length %d and breadth %d is %d\n",length, breadth, area);
    return 0;
}