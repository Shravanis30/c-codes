//write a programme to read marks of 5 subjects and print sum and percentage
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5, percentage, sum;
    printf("Enter the marks of sub1 sub2 sub3 sub4 sub5 :");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = sum/5;
    printf("The student scored marks : %d\n", sum);
    printf("The student percentage : %d \n",percentage );
    if(percentage >= 60) {
        printf("the student is first class pass.");
        } 
    return 0;
}