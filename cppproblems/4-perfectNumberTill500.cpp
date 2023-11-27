/*

Write a program in C++ to find the perfect numbers between 1 and 500.
The perfect numbers between 1 to 500 are:

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    for (int num = 1; num <= 500; num++)
    {
        int sum = 0;

        // nested loop.
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            cout << num << endl;
        }
    }

    return 0;
}
