#include<stdio.h>
#include<string.h>

struct book
    {
       char name[25];
       int price;
    };

int main()
{
    int n;
    printf ("Enter no. of books : ");
    scanf ("%d",&n);
    struct book b[n];
    for(int i=0;i<n;i++)
    {
        printf ("Enter name of the book %d: ",i+1);
        scanf ("%s",b[i].name);
        printf ("Enter price of the book %d: ",i+1);
        scanf ("%d",&b[i].price);
    }
    printf ("Name\t\t\tPrice\n");

    for (int i=0;i<n;i++)
    {
        printf ("%s\t\t\t%d\n",b[i].name,b[i].price);
    }
    return 0;
}