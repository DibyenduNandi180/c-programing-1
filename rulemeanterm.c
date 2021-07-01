#include <stdio.h>
#include <stdlib.h>

int calculate(int a, int b, int c) //  1 0 1====2**2+2**1+2**0
{
    int ans;
    ans = (4 * a) + (2 * b) + (1 * c);
    return ans;
}

int MeanTerm(int n, int p, int A[])
{
    int z, R[100];
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && p == 0)
        {
            z = calculate(0, A[i], A[i + 1]);
        }
        else if (i == 0 && p == 1)
        {
            z = calculate(A[n - 1], A[i], A[i + 1]);
        }
        else if (i == (n - 1) && p == 0)
        {
            z = calculate(A[i - 1], A[i], 0);
        }
        else if (i == (n - 1) && p == 1)
        {
            z = calculate(A[i - 1], A[i], A[0]);
        }
        else
        {
            z = calculate(A[i - 1], A[i], A[i + 1]);
        }
        R[i] = z;
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", R[j]);
    }
}

void check_error(int n, int p, int A[])
{
    if (n < 0 || n > 100 || p > 1 || p < 0)
    {
        printf("Error");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 1 || A[i] < 0)
        {
            printf("Error");
            exit(0);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, p, A[100];
    printf("INPUT: ");
    scanf("%d", &n);
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("OUTPUT: ");
    check_error(n, p, A);
    MeanTerm(n, p, A);

    return 0;
}