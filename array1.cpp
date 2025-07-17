#include<stdio.h>
int main()
{
    //how to declare run time array
    int a[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    int add=0,max=0,min=a[2];

    for (int i=0; i<5;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
        if (max>a[i])
        {
            max=a[i];
        }
        printf(" %d",a[i]);
    }
    printf("\nReverse Array is \n");
    for (int i=4; i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}