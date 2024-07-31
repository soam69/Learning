#include<iostream>
using namespace std;

double gettotal (double arr[] , int size){
    double total = 0;
    for (int i = 0; i < size ; i++){
        total += arr[i];
    }
    return total;
}




int main()
{
    double price[] = {12.75 , 7.25 , 44.35 , 25.65};
    double total = gettotal (price , 4);

    cout << total;
    return 0;
}