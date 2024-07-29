#include<iostream>
using namespace std;

void printarray (int num[], int size){
    for (int i = 0; i < size ; i++){
        cout << num[i] << ", ";
    }
}

void bubbleSort (int num[], int size){
    printarray (num,size);
    cout << endl;
    bool swapped;
    for (int i = 0; i < size-1; i++){
        swapped = true;
        for (int j = 0; j < size-1-i ; j++){
            if (num[j]>num[j+1]){
                swap (num[j],num[j+1]);
                swapped = false;
            }
        }
        printarray (num,size);
        cout << endl;
        if (swapped){
            break;
        }
    }
}

void selectionSort (int num[], int size){
    printarray (num,size);
    cout << endl;
    for (int i = 0; i < size -1 ; i++){
        int min = i;
        for (int j = i+1; j < size; j++ ){
            if (num[j] < num[min]){
                min = j;
            }
        }
        if (min!=i){
            swap (num[min],num[i]);
        }
        printarray (num,size);
        cout << endl;
    }
}

void insertionSort (int num[], int size){
    printarray (num,size);
    cout << endl;
    for (int i = 1; i < size; i++){
        int key = i;
        while (num[key-1]>num[key] && key > 0){
            swap (num[key-1],num[key]);
            key--;
        }
        printarray (num,size);
        cout << endl;
    }

}

int main()
{
    int nums [] = {1,2,3,4,5,6,7,8,10,9};
    cout << "BUBBLE SORT : \n";
    bubbleSort(nums,10);
    cout << endl;
    return 0;
}