// write a program to add numbers using function 
#include<stdio.h>

    int add(int a, int b) {
        return a + b;
    }
    int main() {
        int num1, num2, sum;

        printf("Enter the first bumber: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        sum = add(num1, num2);

        printf("sum of number is %d\n",sum);
        
        return 0;
    }

