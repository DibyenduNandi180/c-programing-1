#include <stdio.h>
#include <stdlib.h>

int cal(int b, int arr[], int n)
{
    int c = 0, add = 0;
    for (size_t i = 0; i < n; i++)
    {
        add += arr[i];
        if (add <= b)
        {
            c++;
        }
    }
    // printf("\n%d\t%d", b, add);
    return c;
}

int My_Fun(int n, int b, int num[])
{
    int a;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
        // printf("%d\t", num[i]);
    }
    int z;
    z = cal(b, num, n);
    return z;
}

int main(int argc, char const *argv[])
{
    int t, n, budget, arr[100], brr[10];
    printf("INPUT: \n");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &budget);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        brr[i] = My_Fun(n, budget, arr);
        // printf("\nCase #%d: %d\n", i + 1,My_Fun(n, budget, arr));
    }
    printf("\nOUTPUT: ");
    for (int j = 0; j < t; j++)
    {
        printf("\nCase #%d: %d", j + 1, brr[j]);
    }
    return 0;
}