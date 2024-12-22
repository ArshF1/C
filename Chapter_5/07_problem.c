#include <stdio.h>

void star(int);
// void star(int n){
//     for (int i=1;i<n+1;i++){
//         if (i==1){
//             printf("*\n");
//         }
//         else if (i%2!=0){
//             printf("*%d\n",i);
//         }
//     }
// }

void star(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    star(3);
    return 0;
}