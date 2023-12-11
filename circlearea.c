// programme to read radius of circle and print its area and circumference
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    float radius, circumference, area;
    printf("Enter the value of radius :");
    scanf("%f", &radius);
    
    circumference = 2*3.14*radius;
    printf("The circumference of circle of given radius is : %.2f\n", circumference);

    area = 3.14*radius*radius;
    printf("The area of circle : %.2f", area);
    return 0;
}