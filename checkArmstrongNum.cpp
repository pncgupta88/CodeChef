#include<iostream>
using namespace std;

int main(){
    int num , digit = 0 , rem , finalnum = 0;
    cout << "Enter a number: ";
    cin>> num;
    int originalnum=num;
    
    if (num < 0)
    {
        cout << "Enter a valid number.";
        return 0;
    }
    
    if (num==0)
    {
        digit = 1;
    }else
    {
        int temp=num;
        while (temp > 0)
        {
            temp/= 10;
            digit++;
        } 
    }
    
    while (num>0)
    {
        rem = num%10;
        int product=1;
        for ( int i = 1; i <= digit; i++)
        {
            product*=rem;
        }
        finalnum += product;
        num/=10;
    }

    if (finalnum == originalnum)
    {
        cout<< "Armstrong Number";
    }else
    {
        cout<< "Not an armstrong number.";
    }

    return 0;
}