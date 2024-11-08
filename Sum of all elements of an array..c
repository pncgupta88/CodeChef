#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array.\n");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("The sum of all elements of array is %d.\n", sum);

    return 0;
}