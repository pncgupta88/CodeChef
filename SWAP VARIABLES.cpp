#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not swap variables.
void swap(int a, int b){ // temp a b
    int temp = a;        //   4  4 5
    a=b;                 //   4  5 5
    b=temp;              //   4  5 4 
}

// This will swap variables.
void swapReferenceVar(int &a, int &b){ // temp a b
    int temp = a;                    // 4    4 5
    a=b;                             // 4    5 5
    b=temp;                          // 4    5 4 
}

int main(){
    int a=4, b=5;
    //cout<< "The sum of 4 and 5 is "<< sum(a,b); 
    cout<< "The value of a is "<< a << " The value of b is "<< b<<endl;

    swap(a,b); // This will not swap variables.
    cout<< "The value of a is "<< a << " The value of b is "<< b<<endl;

     swapReferenceVar(a,b); // This will swap variables.
    cout<< "The value of a is "<< a << " The value of b is "<< b;

    return 0;
}

