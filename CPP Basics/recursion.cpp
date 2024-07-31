#include<iostream>
using namespace std;

int factorial (int num){
    if(num == 1){
        return 1;
    }
    return num*factorial(num-1);
}
int fibonacci (int num){
    if (num == 1){
        return 0;
    }
    if (num == 2){
        return 1;
    }

    return fibonacci (num-1) + fibonacci(num-2);
}

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    cout << "The "<< n << "th term of the fibonacci series is " << fibonacci(n) << endl;
    return 0;
}