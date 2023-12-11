//write a programme to find roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, d, x, y;
    printf("Enter the value of coefficent a : ");
    scanf("%f", &a);
    printf("Enter the value of coefficent b : ");
    scanf("%f", &b);
    printf("enter the valueof coefficent c : ");
    scanf("%f", &c);
    d = sqrt(b*b - 4*a*c);
    x = (-b+d)/2*a;
    y = (-b-d)/2*a;

    printf("Therefore the roots 1 : %.2f and root 2 : %.2f", x,y);

    return 0; 
}