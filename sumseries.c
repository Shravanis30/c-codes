/* WAP OF TO FIND SUM IF SERIES
1 + 1/2 + 1/3 + 1/4 +.... + 1/n */

#include<stdio.h>
int main() {
    int n;
    float i, sum;
    sum = 0.0;

    printf("enter the value of n :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum +=  1/i;
    }

    printf("Therefore the sum of series = %f\n",sum);
    return 0;
}


