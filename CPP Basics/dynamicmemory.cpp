#include<iostream>
using namespace std;
int main()
{
    int* marks = new int;
    for (int i = 0; i<10 ; i++)
    {
        *marks = i+1;
        cout << *marks << endl;
        delete[] marks;
    }
    
    
    return 0;

}