//Effecient approach.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter a number to check it is prime or not: ";
    cin>> num;
    bool prime = true;
    if (num <= 1)
    {
        cout<< "Don't enter a num less than or equal to one.";
    }else
    {
        for (int i = 2; i*i <= num; i++)
        {
            if (num%i == 0)
            {
                prime = false;
                break;
            }            
        }if (prime)
        {
            cout<< num << " is a prime number.";
        }else
        {
            cout<< num <<" is not a prime number.";
        }       
    }

    return 0;
}



//Ineffecient approach.

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<< "Enter a number to check it is prime or not: ";
//     cin>> num;
//     int noOfDiv = 0;
    
//     if (num <= 1)
//     {
//         cout<< "Enter a number greater than 1 to check prime.";
//     }else 
//     {
//         for (int i = 1; i <= num; i++)
//         {
//             if (num%i == 0)
//             {
//                 noOfDiv++;
//             }
//         // Div = 2 
//         }if (Div == 2)
//         {
//             cout<< "Prime Number.";
//         }else
//         {
//             cout<< "Not a prime number.";
//         }
        
//     }

//     return 0;
// }

