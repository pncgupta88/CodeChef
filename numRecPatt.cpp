#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout<< j;
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<< k;
        }
        
        cout<<endl;
    }
    
}