// write a program to print single digit number in words
#include<stdio.h>
#include<conio.h>
int main() {
    int number;
    printf("Enter the single digit number : ");
    scanf("%d",&number);

    switch(number)
{
    case 0: printf("zero");
    break;
    case 1: printf("one");
    break;
    case 2: printf("two");
    break;
    case 3: printf("three");
    break;
    case 4: printf("four");
    break;
    case 5: printf("five");
    break;
    case 6: printf("six");
    break;
    case 7: printf("seven");
    break;
    case 8: printf("eight");
    break;
    case 9: printf("nine");
    break;
    default : printf("invalid input / not a single digit number");
    break;
}
return 0;
}