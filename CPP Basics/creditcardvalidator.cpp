#include<iostream>
#include<string>
using namespace std;
int main()
{
    string card_number;
    cout << "Enter your Credit Card number : ";
    getline(cin , card_number);
    // Luhn Algorithm
    // 1. Double Every second digit from right to left
    //    If doubled number is 2 digits, split them
    // 2. Add all single digits from step 1
    // 3. Add all odd numbered digits from right to left.
    // 4. Sum results from step 2 & 3
    // 5. If step 4 is divisible by 10, Credit card is valid
    int length = card_number.length();
    int real_number [length];
    int temp= 0;
    int temp2=0;
    int filtered_nums[length];

    for (char digit : card_number){
        real_number[temp]=digit-'0';
        temp++;
    }

    if (length%2==0){
        for (int i=0; i<length; i+=2){
            int doubled_num = real_number[i]*2;
            if (doubled_num > 9){
                filtered_nums[temp2]=doubled_num/10;
                temp2++;
                filtered_nums[temp2]=doubled_num%10;
            }
            else
                filtered_nums[temp2]=doubled_num;
                temp2++;                    
        }
    }
    else
        for (int i=1; i<length; i+=2){
            int doubled_num = real_number[i]*2;
            if (doubled_num > 9){
                filtered_nums[temp2]=doubled_num/10;
                temp2++;
                filtered_nums[temp2]=doubled_num%10;
            }
            else
                filtered_nums[temp2]=doubled_num;
                temp2++;                    
        }

    int even_sum = 0;
    for (int i=0; i<temp2; i++){ 
        even_sum+=filtered_nums[i];
    }
    int odd_sum = 0;
    if (length%2==0){
        for (int i=1; i<length; i+=2){
            odd_sum+=real_number[i];                   
        }
    }
    else
        for (int i=0; i<length; i+=2){
            odd_sum+=real_number[i];                    
        }
    
    int final_sum = even_sum + odd_sum;
    if (final_sum%10==0){
        cout << "Credit Card is Valid";
    }
    else 
        cout << "Credit Card is Invalid";
    return 0;
}