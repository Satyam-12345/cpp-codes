#include<stdio.h>

int main()
{
    int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Addition of array elements: \n");
   
    for (int i=0;i<3;i++)
    {
        int row_wise_sum=0;
        int column_wise_sum=0;
        for(int j=0;j<3;j++)
        {
            row_wise_sum+=a[i][j];
            column_wise_sum+=a[j][i];

            printf("%d ",column_wise_sum);
        }
        printf("%d ",row_wise_sum);

        printf("\n");
    }
}