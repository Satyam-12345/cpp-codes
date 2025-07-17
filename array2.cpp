#include<stdio.h>

int main()
{
    int size;
    scanf("%d",size);
    int a[size];
    for(int i=0;i<=size;i++)
    {
        scanf("%d", &a[i]);
    }
    int sum=0;
    for (int i=0;i<=size;i++)
    {
        sum+=a[i];
        i++;
    }
    printf("%d",sum);
}