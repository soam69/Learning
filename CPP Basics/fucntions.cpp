#include<iostream>
using namespace std;

// Inline fucntions replaces the whole code wherever it is used in main fucntion. So it is used only when 
// the function is very small. To use add 'inline' before the data type of the function.

inline int multiply (int a, int b = 3){
    return a*b;
}

int main()
{
    cout << multiply(4)<<endl;              //Only one argument given. So it will take the default argument 3 as b.
    cout << multiply(7,8)<<endl;            //two argumets are given. So it will overrite the b = 3 and take 8 as b.
    return 0;
} 