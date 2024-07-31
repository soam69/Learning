#include<stdio.h>
int main()
{
    int a[20];
    printf ("Enter Even numbers only.\nProgram will end if you enter a odd number.\nMax limit of numbers : 20\n");
    int sum = 0;
    
        for (int i=0;i<20;i++)
        {
        scanf ("%d", &a[i]);
        if ( a[i]%2 == 0)
        {
        sum = sum + a[i];
        printf ("You entered : %d\n",a[i]);
        printf ("The current sum is %d\n", sum);
        }

        else if(a[i]%2 != 0)
        {
            printf("You have entered an odd number.\nThe code will exit now\n");
            break;
        }
        }
        

        printf ("The Final sum is %d",sum);
    
    return 0;
}