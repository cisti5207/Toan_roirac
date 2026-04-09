#include <stdio.h>

void swap(int i, int j, char *a)
{
    char tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int main()
{
    int n = 6;
    char a[n + 1];
    int i;
    for (i = 1; i <= n; i++)
        a[i] = 'F' - (i - 1);

    int j = n;
    int i_1, i_2;
    for (i_1 = 1; i_1 < j; i_1++)
    {
        for (i_2 = i_1; i_2 <= j; i_2++)
        {
            if (a[i_1] > a[i_2]) 
                swap(i_1, i_2, a);
        }
    }

    for (i = 1; i <= n; i++)
        printf ("%c ", a[i]);
}