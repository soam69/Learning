#include<stdio.h>
//#include<stdlib.h>

void main ()
{
    FILE *fp;
    FILE *fo;
    
    char x[100];
    int n;
    fp = fopen ("source.txt", "r");
    fo = fopen ("destination.txt","w");

    if (fp==NULL)
    {
        printf("FILE NOT FOUND!!!!");

    }

    do
    {
        n = fread (x,1,100,fp);
        fwrite (x,1,n,fo);
    } while (!feof(fp));
    
    

    
    printf ("ho gya kaam\n");

    fclose(fp);
    fclose(fo);
}