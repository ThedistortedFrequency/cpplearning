// Inline, defalut arguments and constant arguments.

#include <bits/stdc++.h>
using namespace std;

// without inline sum function.
int sum(int a, int b)
{
    return a + b;
}

// with inline sum function.
inline int Multiplication(int a, int b)
{
    return a * b;
}



int main()
{
    int first_number;
    int second_number;

    cout << "Enter no1: ";
    cin >> first_number;

    cout << "Enter no2: ";
    cin >> second_number;

    /*  cout << "The sum is: "<< sum(first_number, second_number)<< endl;  */

    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;
    cout << "The multiplication is: " << Multiplication(first_number, second_number) << endl;

    return 0;
}


/* 
Inline: Inline function in C++ is an enhancement feature that improves the execution time and speed of the program.

The compiler may not perform inlining in such circumstances as: 

If a function contains a loop. (for, while and do-while) 
If a function contains static variables. 
If a function is recursive. 
If a function contains a switch or goto statement. 



If a function return type is other than void, and the return statement doesn’t exist in a function body. 
#include <iostream>

int add(int a, int b) {
    // No return statement here
}

int main() {
    int result = add(3, 4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

*/