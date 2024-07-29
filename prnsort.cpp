#include<iostream>
#include<ctime>
using namespace std;

class student {
    public :
        int prn;
        string name;
};

void getinfo (student &s){
    cout << "Enter Name of student : ";
    getline (cin >> ws, s.name);
    cout << "Enter PRN : ";
    cin >> s.prn;
}
void printinfo (student &s){
    cout << "Name : " << s.name << endl;
    cout << "PRN : " << s.prn << endl;
}

void bubbleSort (student stu[], int size){
    for (int i = 0; i < size -1 ; i++){
        for (int j = 0; j < size-i-1; j ++){
            if (stu[j].prn > stu[j+1].prn){
                swap (stu[j],stu[j+1]);
            }
        }
    }
}

int main()
{
    
    int num;
    cout << "Enter the number of students : ";
    cin >> num;
    student s[num];
        for (int i =0; i < num ; i++){
            getinfo (s[i]);
        }
    cout << "BEFORE SWAPPING :" << endl;
        for (int i =0; i < num ; i++){
            printinfo (s[i]);
        }
    cout << endl;
    bubbleSort (s,num);
    cout << "AFTER SWAPPING : " << endl;
        for (int i =0; i < num ; i++){
            printinfo (s[i]);
        }
    return 0;
}