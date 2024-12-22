#include <stdio.h>

int main(){
    float total=300;
    int sub1,sub2,sub3;
    printf("Enter marks of subject 1: ");
    scanf("%d",&sub1);
    printf("Enter marks of subject 2: ");
    scanf("%d",&sub2);
    printf("Enter marks of subject 3: ");
    scanf("%d",&sub3);
    int subTotal=sub1+sub2+sub3;
    float percentage=subTotal/total*100;
    // printf("%f\n",subTotal/total*100);
    if (percentage<40.0){
        printf("You failed\n");
    }
    else{
        if (sub1/100.0*100<33){
            printf("You failed in sub1\n");
        }
        if (sub2/100.0*100<33){
            printf("You failed in sub2\n");
        }
        if (sub3/100.0*100<33){
            printf("You failed in sub3\n");
        }

    }

    return 0;
}