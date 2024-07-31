#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
     printf("Enter b: ");
    scanf("%d",&b);
     printf("Enter c: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is largest ",a);
        }
        else{
            printf("%d is largest",c);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d is largest: ",b);
        }
        else{
            printf("%d is largest",c);}
    }
    else{
        printf("C is largest..UwU");
    }


    return 0;
}