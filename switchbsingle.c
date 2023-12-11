// write a progarm to print single digit number and print all numbers from that no to zero
#include<stdio.h>
int main() {
    int a;
    printf("enter the number :");
    scanf("%d", &a);
    switch(a) {
        case 9: printf("nine \n");
        case 8 : printf("eight \n");
        case 7 : printf("seven \n");
        case 6 : printf("six \n");
        case 5 : printf("five \n");
        case 4 : printf("four \n");
        case 3 : printf("three \n");
        case 2 : printf("two \n");
        case 1 : printf("one \n");
        case 0 : printf("zero \n");
        break;
        default : printf("not a single digit number");
    }
}
