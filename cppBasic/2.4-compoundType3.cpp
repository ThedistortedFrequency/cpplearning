// Pointer: A pointer is a compound type that “points to” another type.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // both ip1 and ip2 are pointers to int
    int *ip1, *ip2;

    // dp2 is a pointer to double; dp is a double
    double dp, *dp2;

    int ival = 42;
    // p holds the address of ival: p is pointer to ival
    int *p = &ival;

    cout << "ival: " << ival << endl;
    cout << "pointer variable: " << p << endl; // p = ival.

    cout << "dereference a pointer: " << *p << endl;
    cout << "reference variable: " << &ival << endl;

    double dval;
    double *pd = &dval;
    double *pd2 = pd; 

    return 0;
}
