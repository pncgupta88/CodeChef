// Program to swap two numbers without using temporary variables.

#include<stdio.h>

int main(){
    int a, b;  // Let a = 20 and b = 5.
    printf("Enter the initial value of a.\n");
    scanf("%d", &a);
    printf("Enter the initial value of b.\n");
    scanf("%d", &b);
    printf("Before swap the value of a is %d and b is %d.\n", a, b);

    
    a = a - b; // a=15 , b=5
    b = a + b; // a=15 , b=20
    a = b - a; // a=5 , b=20

    printf("After swap the value of a is %d and b is %d.", a, b);

    return 0;
}