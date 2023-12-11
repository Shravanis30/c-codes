// write a code in c to read the operator and perform operation on 2 numbers using switch by ttejuu

#include <stdio.h>

int main()
{
  float a, b;
  char operator;

  printf("Enter the operator : ");
  scanf(" %c", &operator);

  printf("Enter two numbers: ");
  scanf("%f %f", &a, &b);

  switch (operator)
  {
  case '+':
    printf("%f", a + b);
    break;
  case '-':
    printf("%f", a - b);
    break;
  case '*':
    printf("%f", a * b);
    break;
  case '/':
    if (b == 0)
    {
      printf("number Cannot be divided by zero \n");
    }
    else
    {
      printf("%f", a / b);
    }
    break;
  default:
    printf("Error: Invalid operator \n");
  }
  return 0;
}
