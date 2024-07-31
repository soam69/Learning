#include<stdio.h>
int main()
{
    int num;
    int ans;
    int rem[100];
    int count=0;
    printf ("Enter a number in Decimal : ");
    scanf ("%d",&num);

    //for reference take the number 7
    for (int i = 0;;i++){
    rem[i] = num%2;
    num = num/2;
    count ++;
    if (num == 0){
        break;
    }
    }
    printf ("The answer is : ");
    for (int x = count-1;x>=0;x--)
    {
        printf ("%d",rem[x]);
    }
    
    return 0;
}