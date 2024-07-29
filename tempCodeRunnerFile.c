#include<stdio.h>
int main()
{
    int st[2][2]= {0};
    for (int i = 0; i < 2 ; i++){
        for (int j = 0; j < 2 ; j++){
            printf ("\t%d",st[i][j]);
        }
        printf ("\n");
    }
    return 0;
}