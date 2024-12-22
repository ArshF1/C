#include <stdio.h>

int main(){
    int i=72;
    int* j=&i; // j is a pointer pointing to i
    // (&) "The Address of"
    printf("The value of %d is %p\n",i,&i);
    printf("The value of %d is %p\n",i,j);
    
    // *(&) "The Value at Address"
    printf("The value at address %p is %d\n",j, *j);
    return 0;
}