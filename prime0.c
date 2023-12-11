#include<stdio.h>
int main () {
    int i, n, count=0;

    printf("enter the number: ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("the number is not prime nor composite");
    }
    else
    {
    for(i=1; i<n; i++)
    {
        n % i;
        if(n%i==0)
        {
            count++;
        }
    }
        if(count == 1)
        {
            printf("%d is a prime number", n);
        }
        else 
        {
            printf("%d is not a prime number", n);
        }
    }
    
    return 0;
} 