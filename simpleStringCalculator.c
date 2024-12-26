#include<stdio.h>

int main(){
    char op;
    double inputOne , inputTwo;
    
    printf("Enter the operator (+,-,*,/): ");
    scanf("%c", &op);

    printf("Enter the first input: ");
    scanf("%lf", &inputOne);

    printf("Enter the second input: ");
    scanf("%lf", &inputTwo);

    switch (op) 
    {
        case '+':
            printf("%lf + %lf = %lf\n", inputOne , inputTwo , inputOne + inputTwo);
            break;
        case '-':    
            printf("%lf - %lf = %lf\n", inputOne , inputTwo , inputOne - inputTwo);
            break;
        case '*':
            printf("%lf * %lf = %lf\n", inputOne , inputTwo , inputOne * inputTwo);
            break;
        case '/':
            if (inputTwo != 0)
            {
                printf("%lf / %lf = %lf\n", inputOne , inputTwo , inputOne / inputTwo);
            }else
            {
                printf("Error!");
            }
            break;
        default:
            printf("Error!Operator is not correct.\n");
            break;
    }

    return 0;
}