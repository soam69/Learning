#include<iostream>
using namespace std;

int deposit (int balance){
    int amount;
    cout << "Enter the amount to be deposited : ";
    cin >> amount;
    if (amount < 0){
        cout << "That's a invalid amount";
    }
    else
    balance += amount;
    return balance;
}
int withdraw (int balance){
    int amount;
    cout << "Enter the amount to be withdrawed : ";
    cin >> amount;
    if (amount < 0){
        cout << "That's a invalid amount";
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance";
    }
    else
    
    balance -= amount;
    return balance;
}

int main()
{
    int balance =0;
    int choice;
    do{
        
        cout << "Enter the choice no. \n 1.Deposit Money\n 2.Withdraw Money\n 3.Show Balance\n 4.Exit\n";
        cin >> choice;
        cin.clear();
        fflush(stdin);
    
        switch (choice)
        {
            case 1:
            balance = deposit (balance);
            break;
            case 2:
                balance = withdraw (balance);
                break;
            case 3:
                cout << "Your account balance is  : " << balance << " rs.\n";
                break;
            case 4:
                cout << "Thank you for visiting !";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    }  while (choice !=4);

     
    return 0;
}