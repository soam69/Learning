#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    // This is a number guessing game
    srand (time(NULL));
    int randomNum = (rand()%100)+1;
    int guessNum, tries = 0;
    
    
    do {
        cout << "Guess" << (tries==0? " the Number : " : " again : ");
        cin >> guessNum;
        tries++;
        if (guessNum > randomNum){
            cout << "Too high !! ";
        }
        else if (guessNum < randomNum) {
            cout << "Too Low !!! ";
        }
        
    }
    while (guessNum != randomNum);

    cout << "Congratulations !! You guessed the number right.\n";
    cout << "You guessed the number in " << tries << " tries.";
    return 0;
}