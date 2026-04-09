#include <stdio.h>

void method(int b[], int n);
void init(int b[], int n);
int islast(int b[], int n);
void gen(int b[], int n);
void out(int b[], int n);
void swap (int b[], int i, int j);
void re(int b[], int right, int left);


int main()
{
    int n;
    printf ("Nhap n: ");
    scanf ("%d", &n);
    
    int b[n + 1];
    method (b, n);
}

void gen (int b[], int n)
{
    int max_i = 0;
    for (int j = 1; j + 1 <= n; j++)
    {
        if (b[j] < b[j + 1] && j > max_i) max_i = j;
    }

    int max_j = max_i + 1;

    for (int j = max_i + 1; j <= n; j++)
    {
        if (b[j] > b[max_i]) max_j = j;
    }
    
    swap (b, max_i, max_j);
    re (b, max_i + 1, n);
    
}

void re (int b[], int i, int n)
{
    int pos_avg = (n + i) / 2, x = 0;
    while (i + x <= pos_avg)
    {
        swap(b, i + x, n - x);
        x++;
    }
}

void swap (int b[], int i, int j)
{
    int tmp = b[i];
    b[i] = b[j];
    b[j] = tmp;
}

int islast (int b[], int n)
{
    int i = 1;
    while (i + 1 <= n)
    {
        if (b[i] < b[i + 1]) return 0;
        i++;
    }
    return 1;
}

void out (int b[], int n)
{
    int i = 1;
    while (i <= n)
    {
        printf ("%d ", b[i]);
        i++;
    }
    printf ("\n");
}

void init (int b[], int n)
{
    int i = 1;
    while (i <= n)
    {
        b[i] = i;
        i++;
    }
}

void method (int b[], int n)
{
    init (b, n);
    out (b, n);

    int stop = islast (b, n);

    while (!stop)
    {
        gen (b, n);
        out (b, n);

        stop = islast (b, n);
    }
}