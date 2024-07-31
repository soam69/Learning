#include<iostream>
int main()
{
    using namespace std;
    string name;
    int age;
    string fname;
    cout << "Enter your nick-name : ";
    cin >> name;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your full name : ";
    getline (cin >> ws, fname);

    cout << "Your nick-name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your full name is " << fname << endl ;
    cout << fname.length();

    return 0;
}