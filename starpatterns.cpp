#include<stdio.h>
int main(){
    for(int i=0;i<6;i++)//row
    {
        for(int j=0;j<=i;j++) //col,
        {
            printf("*");
        }
        printf("\n");
    }


    for(int i=6;i>=1;i--)//row
    {
        for(int j=0;j<=i;j++) //col,
        {
            printf("*");
        }
        printf("\n");
    }
}