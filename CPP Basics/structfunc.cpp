#include<iostream>
using namespace std;

struct circus {
    string name;
    int rollno;
    string division;
};

void newdiv (circus &studentno){
    string newpanel;
    cout << "Enter your new panel : ";
    getline (cin >> ws, newpanel);
    studentno.division = newpanel;
}

void getinfo (circus &studentno){
    cout << "Enter your name : ";
    getline (cin >> ws, studentno.name);
    cout << "Enter your Roll : ";
    cin >> studentno.rollno;
    cout << "Enter your division :";
    getline (cin >> ws, studentno.division);
}

void printinfo (circus studentno){
    cout << studentno.name << "'s new panel is :" << studentno.division << endl;
}


int main()
{
    circus student1;
    getinfo (student1);
    newdiv (student1);
    circus student2;
    getinfo (student2);
    newdiv (student2);
    circus student3;
    getinfo (student3);
    newdiv (student3);
    circus student4;
    getinfo (student4);
    newdiv (student4);

    cout << "************************\n";
    printinfo (student1);
    printinfo (student2);
    printinfo (student3);
    printinfo (student4);
    cout << "************************";
    

    return 0;
}