// WAP TO PRINT HELLO 10 TIMES
#include<stdio.h>
 
    void printHW(int n);

    int main() {
        printHW(10);
        return 0;
    }

    void printHW(int n){
        if(n == 0){
            return;
        }
        printf("Hello world\n ");
        printHW(n-1);
    }    

