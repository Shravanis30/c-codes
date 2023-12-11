// write a program to check weather adult or teenager or child and weather they can vote and drive or not
#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    
    if(age >=18) {
    printf("its an adult \n");
    printf("the person can drive \n");
    printf("the person can vote");
    }

    else if(age > 13 && age < 18) {
        printf("its a teenager \n");
        printf("they cannit drive \n");
        printf("they cannot vote \n");
    }
    
    else {
        printf("its a child");
    }

}