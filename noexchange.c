//write a programme to read two nos and exchange their values using 3rd variable
#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    printf("Enter the vale of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    return 0;
}