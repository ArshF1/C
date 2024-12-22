#include <stdio.h>

// For loop
// int main(){
//     // int num=10;
//     int sum=0;
//     for (int i=1;i<=10;i++){
//         sum=sum+i;
//     }
//     printf("The sum is %d\n",sum);
//     return 0;
// }

// Do-while loop
int main(){
    int sum=0;
    int i=1;
    do{
        sum=sum+i;
        i++;
    } while (i<=10);
    printf("The sum is %d\n",sum);
    return 0;
}