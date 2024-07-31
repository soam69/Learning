#include<iostream>
using namespace std;
bool check_valid(string card_number){
    bool second = false;
    int sum=0;
    int length = card_number.length();
    for (int i=length-1; i <=0; i-- ){
        int d = card_number[i] - '0';
        
        if (second){
            d *=2;
        }

        sum += d/10;
        sum += d%10;

        second = !second;
    }
    
    return (sum%10 == 0);
}
int main()
{
    string card_number;
    cout << "Enter you Card number : "<< endl;
    cin >> card_number;
    if(check_valid(card_number)){
        cout << "Card is Valid";
    }
    else 
        cout << "Card is Not valid";
    return 0;
}