// constant and manipulators and operator precedence.


// Inclues all header fiels. Used in CP.
#include <bits/stdc++.h>

// this header file for manipulators
// #include<iomanip>

using namespace std;


int main()
{
    int changeable_variable = 12;
    cout << "The value was: " << changeable_variable << endl;

    changeable_variable = 25;
    cout << "The value is: " << changeable_variable << endl;

    // constant variable
    const int unchangeable_variable = 45;
    cout << "The value was: " << unchangeable_variable << endl;

    // unchangeable_variable = 12; it will show error.
    // cout << "The value is: " << unchangeable_variable << endl;



    // ******** Manipulators in CPP *********

    int a = 2, b = 12, c = 1233;

    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a without setw is: " << setw(4) << a << endl;
    cout << "The value of b without setw is: " << setw(4) << b << endl;
    cout << "The value of c without setw is: " << setw(4) << c << endl;


    // ********** Operator Precedence **********

    // use cpp reference.

    



    return 0;
}
