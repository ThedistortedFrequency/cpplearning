// Write a program in C++ to find the sum of the first 10 natural numbers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int natural_number, sum = 0;

  cout << "Enter natural no: ";
  cin >> natural_number;

  for (int i = 1; i <= natural_number; i++)
  {
    sum = sum + i;
  }

  cout << "sum of number: " << sum << endl;
  return 0;
}
