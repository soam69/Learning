#include<stdio.h>
int main()
{
    int r,c;
    printf ("Enter Number of rows");
    scanf ("%d",&r);
    printf ("Enter Number of columns");
    scanf ("%d",&c);
    for (int i=r;i>0;i-- )
    {
        for (int j=0;j<c;j++)
        {
            printf ("\t*\t");
        }

        printf ("\n\n");

    }
    
    
    
    return 0;
}