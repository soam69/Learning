#include<iostream>
using namespace std;

// Constructor : Constructor is a function which has same name as the class and is called whenever a 
// object is getting instantiated (declared).
// It can have arguments or not. Generally used to initialize a object simultaneously while declaring it using 
// arguments.

class student {
    public : 
    string name;
    double gpa;
    bool gay;

    student(){
        cout << "Enter your name, gpa and gay status : ";
        getline (cin >> ws,name);
        cin >> gpa;
        cin >> gay;
    }

    
};

    void display (student obj){
        cout << "Name : " << obj.name << endl;
        cout << "gpa : " << obj.gpa << endl;
        cout << "gay : " << obj.gay << endl;
    }

int main()
{
    student first;
    display (first);
    return 0;
}