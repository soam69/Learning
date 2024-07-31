#include<iostream>
using namespace std;
int main()
{
    string names [][3] = {{"Soham","Rushya","Ramya"},
                   {"St","Ajay","Krishna"},
                   {"her","and her", "and also her"},
                   {"Pizza","Burger","Sandwich"}};
    
    int rows = sizeof(names)/sizeof(names[0]);
    int columns = sizeof (names[0])/sizeof(names[0][0]);

    for (int i=0; i < rows ; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << names[i][j] << ", ";
        }
        cout << '\n';
    } 
    return 0;
}