#include<iostream>
using namespace std;

void bubbleSort (int num[], int size){
    bool swapped = true;
    for (int i = 0; i < size-1; i++){
        swapped = true;
        for (int j = 0; j < size-1-i ; j++){
            if (num[j]>num[j+1]){
                swap (num[j],num[j+1]);
                bool swapped = false;
            }
        }
        if(swapped){
            break;
        }
    }
}
void printarray (int num[], int size){
    for (int i = 0; i < size ; i++){
        cout << num[i] << ", ";
    }
}

int main()
{
    int num []= {4,5,6,1,2,3,7,8,9,0};
    bubbleSort(num,10);
    printarray(num,10);
    return 0;
}
