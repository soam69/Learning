#include<iostream>
using namespace std;

int arraysearch (int array[], int size, int num ){
    for (int i=0; i < size ; i++){
        if (array[i]==num){
            return i;
        }
    } 
        return -1;

}

int main(){
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(int);
    int findNum;
    cout << "Enter number to be found : ";
    cin >> findNum;
    int index = arraysearch (numbers , size , findNum);
    if (index != -1){
        cout << "The index of " << findNum <<" is " << index;
    }
    else 
        cout << "The entered number is not present in the array";
    return 0;
}