#include <bits/stdc++.h>
using namespace std;

// global variable
int global_Variable = 108; 

void Function(){
    // local variable of this Function()


    int global_Variable = 19; 
    int local_Variable = 12; 


    cout << "Function local variabel: "<<local_Variable << endl; 
    cout << "Function global variabel: "<<global_Variable << endl; 
}


int main()
{
    // local variable of main()
    // local variable take precedence.
    int global_Variable = 9; 
    int local_Variable = 10; 

    cout << "Main function global variable: "<<global_Variable << endl; 
    cout <<"local variable of main function: "<< local_Variable << endl;
    
    Function();

    return 0;
}
