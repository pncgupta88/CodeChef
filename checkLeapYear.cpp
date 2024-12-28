#include<iostream>
using namespace std;

int main(){
    int year;
    cout<< "Enter a year to check wheather it is leap year or not:"<<endl;
    cin>> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        cout<< "Hurray! " << year << " is a leap year :).";
    }else    
    {
        cout<< "Oops " << year << " is not a leap year :(."; 
    }
    
    return 0;
}