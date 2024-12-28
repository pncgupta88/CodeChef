#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b;
    printf("Enter the number from where you want to start: ");
    scanf("%d", &a);
    printf("Enter the last number till you want prime numbers: ");
    scanf("%d", &b);

    if (a<1)
    {
        printf("Don't enter a number less than one.");

    }else if (a==1)
    {
        printf("The prime numbers between %d and %d are:\n", a, b);
        a= a+1;                
        for (int i = a; i < b; i++)
        {
            bool prime = true;
            for (int j = 2; j*j <= i ; j++)
            {
                if (i%j == 0)
                {
                    prime = false;
                    break;        
                }                       
            }
        if (prime)
        {
            printf("%d\n", i);
        }
        }                               
    } 
    return 0;
}