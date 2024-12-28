#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter a num to check it is palindrome or not:"<<endl;
    cin>> num;
    int reverseNum = 0;
    int originalNum = num;
    while (num != 0)
    {
        int lastdigit = num % 10;
        reverseNum = reverseNum*10 + lastdigit;
        num = num/10;
    }
    if (reverseNum == originalNum)
    {
        cout<< "The number you enter is a palindrome.";
    }else
    {
        cout<< "The number you enter is not a palindrome.";
    }
    
    return 0;
}