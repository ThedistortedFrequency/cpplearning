/*

Perfect Number:
6 = 1, 2, 3, 6
sum of = 1 + 2 + 3 = 6
nmber not added itself


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, sum = 0;
    cout << "Enter no to check Perfect Number: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
    {
        cout << "Perfect Number" << endl;
    }
    else
    {
        cout << "Not perfect Number" << endl;
    }

    return 0;
}
