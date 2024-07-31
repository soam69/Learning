#include<iostream>
using namespace std;

int *sortarray (int array[] , int size ){
    for (int k=0 ; k < (size-1); k++){
        for (int i = 0; i < (size-1-k); i++){
            if (array[i]>array[i+1]){
                swap (array[i],array[i+1]);
            }
        }
    }
    return array;
}

int main(){
    int array [] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array)/sizeof(array[0]);
    int *ptr = sortarray (array , size );
    for (int i = 0; i<size ;i++){
        cout << ptr[i] << " ";
    }
    
    return 0;
}