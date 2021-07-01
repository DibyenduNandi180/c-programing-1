#include <stdio.h>
#include <stdlib.h>

int jumping(int l, int n, int arr1[])
{
    int c = -1;
    if (n == l)
    {
        return 0;
    }
    if (arr1[l] == 0)
    {
        return -1;
    }
    for (int i = l + 1; i <= n && i <= l + arr1[l]; i++)
    {
        int jumps = jumping(i, n,arr1);
        if (jumps != -1 && jumps + 1 < c)
            c = jumps + 1;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("INPUT:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("OUTPUT: %d", jumping(0, n, arr));

    return 0;
}