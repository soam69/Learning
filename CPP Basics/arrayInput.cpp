#include<iostream>
using namespace std;
int main()
{
    int size;
    string temp;
    cout << "How many items you'd like to order today, Sir/Madam ??\n";
    cin >> size;
    string foods[size];
    for (int i=0; i < size ; i++){
        cout << "Enter a food you'd like to order or 'q' to quit#" << i+1 << '\n';
        getline (cin >> ws, temp);
        if (temp == "q"){
            break;
        }
        else 
            foods[i] = temp;
    }
   cout << "You've ordered the following items : \n";
   for (int i = 0; i < size; i++){
        if (foods[i].empty()){
            break;
        }
        else 
            cout << foods[i] << endl;
   }
    return 0;
}