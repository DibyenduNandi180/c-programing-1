#include <stdio.h>
#include <stdlib.h>

int Makeover(int a[20][20],int b[20][20],int r,int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]-=b[i][j];
        }   
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]-a[i][0]-a[0][j]+a[0][0]!=0)
            {
                return -1;
            }   
        }     
    }

    int result=0;
    for (int i = 0; i < r; i++)
    {
        result+=abs(a[i][0]);
    }
    for (int j = 0; j < c; j++)
    {
        result+=abs(a[0][j]-a[0][0]);
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    int r, c;
    int a[20][20],b[20][20] ,*p = (int *)malloc(r * c * sizeof(int));
    printf("INPUT: ");
    // printf("Enter the number of rows in array:");
    scanf("%d", &r);
    // printf("\nEnter the number of colomns in array:");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("\nEnter the a[%d][%d] value:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("\nEnter the a[%d][%d] value:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("OUTPUT: %d",Makeover(a,b,r,c));
    // printf("\nThe matrix is:");
    // for (int i = 0; i < r; i++)
    // {
    //     printf("\n");
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf(" %d\t", b[i][j]);
    //     }
    // }
    return 0;
}