
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* // ************* Float, double and long double Literals****************
 float d=34.4F;
 long double e = 34.4L;

 cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
 cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
 cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
 cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
 cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
 cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;   */

    // reference Variable.

    float a = 12.4;
    float &b = a;

    cout << a << endl;
    cout << b << endl;

    // Typecasting.

    int num = 45;
    float num2 = 45.6;

    cout << "The value of a is: " << (float)num << endl;
    cout << "The value of a is: " << (int)num2 << endl;

    return 0;
}
