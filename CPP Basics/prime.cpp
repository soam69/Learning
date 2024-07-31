#include<iostream>
int main()
{
    // This code find if the given number is prime or not and prints the multiples of the number in an array. (prime or not prime)
    using namespace std;
    int number;
    int remainder = 0;
    int k=0;
    cout << "Enter a number : ";
    cin >> number;
    int multiples[number];
    for ( int i = 1; i<=number ; i++)
    {
        if (number%i==0)
        {
            remainder++;
            multiples[k]=i;
            k++;   
        }

    }
    if (remainder == 2)
    {
        cout << number << " is a Prime number" << endl;
    }
    else 
        cout << number << " is not a Prime number" << endl;

    cout << "The multiples of " << number << " are : [";
    for (int m = 0 ; m<k ; m++ )
    {
        cout << multiples[m] << ", ";
    }
    cout << "\b\b]";
    return 0;
}