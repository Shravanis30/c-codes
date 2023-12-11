// write a progarm to identify weather the person is adult or younger
#include<stdio.h>
int main() {
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    age >= 18 ? printf("its an adult \n") : printf("its a younger \n");

    return 0;

}