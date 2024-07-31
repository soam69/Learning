#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char bin[10];
    int con [10];
    printf ("Enter the digit in binary : ");
    scanf ("%s",bin);
    
    // Let's say for reference apan input denge : 111 (which has 3 digits)
    // ASCII value input ho rha hai to wo convert karo pehle

    int digit = strlen (bin);
    for (int x=0; x<digit;x++)
    {
        con[x]= bin[x]-48;
    }
    int result [digit];
    int sum = 0;
    for (int i=1,j=digit;i<=digit,j>0;i++,j--)
    {
        result[i]= con[digit-i]*(pow(2,(digit-j)));
        sum = sum + result[i];
    }

    printf ("The answer is : %d",sum);
    

    return 0;
}