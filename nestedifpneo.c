// check weather the number is postive or negative and also even or odd
#include<stdio.h>
int main() {
    int a;
    printf("enter a number :");
    scanf("%d", &a);

    if(a >= 0){
        printf("the number id postive \n"); 
        if(a % 2 == 0){
            printf("the number is even");
        } else {
            printf("the number is odd");
        }
    } else {
        printf("the number is negative");
    }
}