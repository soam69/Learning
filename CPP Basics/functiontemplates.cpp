#include<iostream>
using namespace std;

template <typename T>
T mymax (T num1 , T num2){ // In this, T can be anything. But datatype of num1 and num2 must be same
    return (num1 > num2) ? num1 : num2;
}
template <typename U, typename V>
auto anymax (U thing1, V thing2){ // In this, thing1 and thing2 can be anything of diff or same datatypes.
    return (thing1 > thing2) ? thing1 : thing2;
} 
int main()
{
   
    cout << mymax (49,69)<< " is bigger nigger\n";
    cout << mymax (4.9,6.9)<< " is bigger nigger\n";
    cout << anymax (49,'2') << " is bigger nigger";
    return 0;
}