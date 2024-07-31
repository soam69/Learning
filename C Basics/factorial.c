#include<stdio.h>
int main()
{
    int a;
    printf ("Enter a number : ");
    scanf ("%d",&a);
    int fact = 1;

    if (a<0)
    {
        printf ("Negative numbers don't have factorial\n");
    }

    else
    {
    for (int i=1;i<=a;i++)
    {
        fact = fact*i;
    }

    printf ("The factorial of %d is %d",a,fact);
    }
    
    return 0;
}