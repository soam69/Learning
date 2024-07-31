#include<stdio.h>
//#include
int main()
{
    int num;
    printf ("Enter a number : ");
    scanf ("%d",&num);
    printf("Numbers divisible by %d under 100 are : ",num);
    int sum = 0;
    for (int i=1;i<100;i++)
    {
    if (i%num == 0)
    {
        printf ("%d, ",i);
        sum += i;
    }
    
    }

    printf ("\b\b \nThe sum is %d",sum);
    
    return 0;
}