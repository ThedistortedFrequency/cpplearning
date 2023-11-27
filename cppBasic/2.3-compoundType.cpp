#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Compound Types:
    A compound type is a type that is defined in terms of another type.

    1.references :A reference defines an alternative name for an object.
    A reference type “refers to” another type.

    2.pointer: A pointer is a compound type that “points to” another type.

    */

    // references
    int ival = 1024;
    cout << "ival: " << ival << endl;

    // refVal refers to (is another name for) ival
    int &refVal = ival;
    cout << "refVal: " << refVal << endl;

    // assign 2 to the object to which refVal refers, i.e., to ival
    refVal = 2;
    cout << "refval: " << refVal << endl;

    // same as ii = ival
    int ii = ival;
    cout << "ii: " << ii << endl;

    // refVal3 is bount to the object to which refVal is bound, i.e., to ival
    int refVal3 = refVal;
    cout << "refVal3: " << refVal3 << endl;

    // initializers i from the value in the object to wich refVal is bound
    // initializes i to the same value as ival;
    int a = refVal;
    cout << "a: " << a << endl;

    /*
    Reference Definitions:
    we can define multiples references in a single definition.
    */

    // px and px2 are both ints.
    int i = 1024, i2 = 2048; 
    cout << "i: "<< i << "\ni2: " << i2 << endl; 

    // r is a reference bound to i; r2 is an int.
    int &r = i, r2 = i2;
    cout << "r: "<< r << "\nr2: " << r2 << endl; 

    // i3 is ans int; ri is a reference bound to i3.
    int i3 = 1024, &ri = i3;
    cout << "i3: "<< i3 << "\ni2: " << ri << endl; 

    // both r3 and r4 are references
    int &r3 = i3, &r4 = i2;
    cout << "r3: "<< i3 << "\nr4: " << ri << endl; 

    return 0;
}
