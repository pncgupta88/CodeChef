#include<stdio.h>

int main(){
    int l;  //length
    int b;  //breadth
    int h;  //height
    printf("Enter the value of length(l) in cm: ");
    scanf("%d", &l);
    printf("Enter the value of breadth(b) in cm: ");
    scanf("%d", &b);
    printf("Enter the value of height(h) in cm: ");
    scanf("%d", &h);
    int area =  2*((l*b)+(b*h)+(h*l));
    printf("The area of cuboid is: %d ", area);

    return 0;
}