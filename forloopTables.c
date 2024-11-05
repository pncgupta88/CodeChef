#include <stdio.h>

int main(){
    int i;
    int j;

    for (int i = 2; i <=10; i++)
    {
        
        // printf("The table of" ("%d", i ) " is:"); This will throw error.
        printf("The table of %d is: \n", i); 
        for (int j = 1; j <= 10; j++)        
        {                                    
            // printf("%d \n", i*j );
            printf("%d * %d = %d \n",i, j, i*j); //This is much better
        }  
        printf("\n");
    }

    return 0;
}