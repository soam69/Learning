#include<iostream>
using namespace std;

struct student {
    string name;
    double gpa;
    bool gay;
};


int main()
{
    int num;
    cout << "How many students are there ? : ";
    cin >> num;
    student student[num];
    for (int i = 0; i < num ; i++){
        cout << "What is your name ? : ";
        getline (cin >> ws, student[i].name);
        cout << "What is your GPA ? : ";
        cin >> student[i].gpa;
        cout << "Are you gay ? ('0' for No, '1' for Yes) :";
        cin >> student[i].gay;
    }

    cout << "Name\t\tGPA\t\tGay\n";
    for (int i = 0; i < num ; i++){
        cout << student[i].name << "\t\t" << student[i].gpa << "\t\t" << (student[i].gay==0 ? "No" : "Yes") << endl;
    }
    return 0;
}