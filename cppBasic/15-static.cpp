#include <bits/stdc++.h>
using namespace std;

/*

***** static *****
Unlike regular local variables, static local variables are initialized only once,
and their values persist between function calls.

*/

class staticVariable
{
public:
    // static class variable
    // this execute only once.
    static int staticVal;

    // consturctor
    staticVariable()
    {
        staticVal++;
    }
};

// intialize static class variable
int staticVariable::staticVal = 0;

class math_operation
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
};

void simple_variable()
{
    int count = 0;
    count++;

    cout << "Count: " << count << endl;
}

void static_variable()
{
    // static local variable.
    static int number = 0;
    number++;

    cout << "number: " << number << endl;
}

int main()
{
    simple_variable(); // output: 1
    simple_variable(); // output: 1
    simple_variable(); // output: 1

    static_variable(); // output: 1
    static_variable(); // output: 2
    static_variable(); // output: 3

    staticVariable object1;
    staticVariable object2;
    staticVariable object3;

    // Accessing static variable using class name.
    cout << "staticVar: " << staticVariable::staticVal << endl;

    // calling static member function using class name.
    int result = math_operation::add(2, 4);

    return 0;
}
