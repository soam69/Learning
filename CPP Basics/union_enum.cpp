#include<iostream>
using namespace std;

union price                    // Can use only one of the variables present in union as they share their memory.
{
    int num; //4 bytes
    char c;  //1 byte          // Overall memory required for the union price is = 4 bytes
    float f; //4 bytes           
};

enum alphabet {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z };
// enums basically give values to anything you store in them indexing from 0.

int main()
{
    cout << a;
    
    return 0;
}