#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;

    // & is address operator.
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    cout << "The value at address b was "<< *b << endl; 

    *b = 7; 
    cout << "The value at address b is "<< *b << endl; 

    // pointer to pointer,
    int **c = &b; 
    cout << "The address of b is: "<< &b << endl; 
    cout << "The address of b is: "<< c << endl; 

    cout << "The value at address c is: "<< *c << endl; 
    cout << "The value at address value_at(c) is: "<< **c<<endl; 

    
    return 0;
}
