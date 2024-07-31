#include<iostream>
#include<ctime>
using namespace std;

string compchoice(){
    string choice;
    srand(time(NULL));
    int choiceNo = (rand() %3)+1;
    switch (choiceNo)
    {
    case 1:
        choice = "rock";
        break;
    case 2:
        choice = "paper";
        break;
    case 3:
        choice = "scissor";
        break;  
    }
    return choice;
}
string userchoice(){
    string choice;
    int choiceNo;
    do {
    cout << "Enter Your choice\n";
    cout << "1.ROCK\n";
    cout << "2.PAPER\n";
    cout << "3.SCISSOR\n";
    cin >> choiceNo;
        cin.clear();
        fflush(stdin);
    switch (choiceNo)
    {
    case 1:
        choice = "rock";
        break;
    case 2:
        choice = "paper";
        break;
    case 3:
        choice = "scissor";
        break;  
    default:
        cout << "Invalid Choice\n";
        break;

    }
    } while (choiceNo != 1 && choiceNo != 2 && choiceNo != 3 );
    return choice;
}
void findwinner(string computer , string user ){
    if (computer == user){
        cout << "The match is a tie";
    }
    else 
            if (user == "rock"){
                if (computer == "paper"){
                    cout << "Computer wins !!";
                }
                else cout << "User wins !!";
                }

            else if (user == "paper"){
                if (computer == "scissor"){
                    cout << "Computer wins !!";
                }
                else cout << "User wins !!";
                }

            else if (user =="scissor"){
                if (computer == "rock"){
                    cout << "Computer wins !!";
                }
                else cout << "User wins !!";
                }
        
}

int main()
{
    string computer = compchoice();
    string user = userchoice();
    cout << "Computer's Choice : " << computer << endl;
    cout << "User's Choice : " << user << endl;
    findwinner (computer , user );
    return 0;
}