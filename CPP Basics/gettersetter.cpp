#include<iostream>
using namespace std;

class student{
    private :
        bool isMale = true;  // since this is private it cant be changed/acceseed directly in the main function.
    public :  
        string name;

        student(string name){
            this->name = name;
        }  
        void getGender(){
            cout << name << " is " << (isMale? "a man" : "not a man") << endl;  // this is a getter, which gets information from the private things. 
        }
        void changeGender(){
            isMale = !isMale;  // this is a setter, which changes information of the private things.
        } 
};

int main()
{
    student student1("Soham");
    student student2("Shivank");
    student student3("Ajay");
    student3.changeGender();
    student1.getGender();
    student2.getGender();
    student3.getGender();

    return 0;
}