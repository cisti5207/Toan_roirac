#include <stdio.h>

void try(int i, int k, int n, int *a);
void out(int k, int *a);

void main()
{
    int n = 6;
    int a[10] = {0};
    
    int k;
    for (k = 1; k <= n; k++)
        try(1, k, n, a);
}

void try(int i, int k, int n, int *a)
{
    int j;
    for (j = 1; j <= n; j++)
    {
        if (j > a[i - 1])
        {
            a[i] = j;
            if (i == k) out(k, a);
            else try(i + 1, k, n, a);
        }
    }

}

void out(int k, int *a)
{
    int i;
    for (i = 1; i <= k; i++)
        printf ("%c ", 'A' + a[i] - 1);
    printf ("\n");
}