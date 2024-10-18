#include<iostream>
using namespace std;

template <class T>
T maxi(T a, T b){
    if ( a > b){
        return a;
    }
    return b;
}

int main()
{
    cout << maxi (10,20) << endl;
    cout << maxi (10.3,20.6) << endl;
    cout << maxi ('a','z') << endl;
    cout << maxi ("soham","Soham") << endl;
    // cout << maxi (10,20) << endl;

    return 0;
}