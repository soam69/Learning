#include<iostream>
using namespace std;

void printarray (int num[], int size){
    for (int i = 0; i < size ; i++){
        cout << num[i] << ", ";
    }
}

void insertionSort (int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = i;
        while (arr[key-1]>arr[key] && key > 0){
            swap (arr[key-1],arr[key]);
            key--;
        }
    }

}



int main()
{
    int nums[] = {5, 2, 4, 6, 1, 3};
    insertionSort(nums,6);
    printarray(nums,6);
    return 0;
}