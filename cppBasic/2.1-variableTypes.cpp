#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Primitive Built-in type: void.

    /*

    ***** Arithmetic Types: *****

    1. Integral types: bool, char, wchar_t, char16_t, char32_t, short, int long, long long.

    2. floating-point types: double, float, long double.

    ***** Signed and Unsigned: *****

    A signed type represents negative or positive numbers (including zero).

    An unsigned type represents only values greater than or equal to zero.


    */

    // bool: Represents true or false values
    bool isTrue = true;
    bool isFalse = false;

    // char: Represents a single character
    char myChar = 'A';

    // wchar_t: Represents a wide character (typically 16 bits)
    wchar_t myWideChar = L'B';

    // char16_t: Represents a 16-bit Unicode character
    // u represent unicode for 16 bit.
    char16_t myChar16 = u'C';

    // char32_t: Represents a 32-bit Unicode character
    // U represent unicode for 32 bits
    char32_t myChar32 = U'D';

    // short: Represents a short integer (typically 16 bits)
    short myShort = 10;

    // int: Represents an integer (typically 32 bits)
    int myInt = 42;

    // long: Represents a long integer (platform-dependent, typically 32 or 64 bits)
    long myLong = 123456;

    // long long: Represents a long long integer (typically 64 bits)
    long long myLongLong = 987654321;

    // float: Represents a single-precision floating-point number
    float myFloat = 3.14f;

    // double: Represents a double-precision floating-point number
    double myDouble = 2.71828;

    // long double: Represents an extended-precision floating-point number
    long double myLongDouble = 3.1415926535;

    // Output values to console
    cout << "bool: " << isTrue << ", " << isFalse << endl;
    cout << "char: " << myChar << endl;
    wcout << "wchar_t: " << myWideChar << endl;
    cout << "char16_t: " << myChar16 << endl;
    cout << "char32_t: " << myChar32 << endl;
    cout << "short: " << myShort << endl;
    cout << "int: " << myInt << endl;
    cout << "long: " << myLong << endl;
    cout << "long long: " << myLongLong << endl;
    cout << "float: " << myFloat << endl;
    cout << "double: " << myDouble << endl;
    cout << "long double: " << myLongDouble << endl;

    // defining four different int variables.
    int somename, someName, SomeName, SOMENAME; 

    // define variable name; 
    int _; 
    _ = 40; 
    cout << _ << endl; 

    /*  inclusive and exclusive 
    
    1 through 10 : [1, 10] = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 
    inclusive means: including last number.

    1 through 10 [1, 10) = 1, 2, 3, 4, 5, 6, 7, 8, 9
    exclusive means: excluding last number.

   */




    return 0;
}
