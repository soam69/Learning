#include<stdio.h>
int main()
{
    int a;
    // Taking input from the user (As usual).
    printf ("Enter the number of odd terms you want to be added : ");
    scanf ("%d",&a);

    printf ("The first %d odd natural numbers are : ",a);

    // For loop to identify the odd natural numbers first.
    for (int i=1;i<a;i++) //Taking it less that a because we need a full stop at end.
    {
        printf ("%d, ",2*i-1);
    }

    // For the full stop a seperate printf statement.
    printf ("%d.\n",2*a-1);
    // For the addition, we know that addition of first n odd numbers is n^2.
    printf ("The addition of first %d odd natural number is %d",a,a*a);

    return 0;
}