#include <stdio.h>

void method(int b[], int n);
void init(int b[], int n);
int islast(int b[], int n);
void gen();
void out(int b[], int n);


int main()
{
    int n;
    printf ("Nhap n: ");
    scanf ("%d", &n);
    
    int b[n + 1];
    method (b, n + 1);
}

void gen(int b[], int n)
{
    int i = 1, max_i;
    while (i < n)
    {
        if (b[i] < b[i + 1]) 
            max_i = i;
    }

    int j = i + 1, min_j = j;
    for (; j <= n; j++)
    {
        if (b[j] < b[min_j]) min_j = j;
    }
}

int islast(int b[], int n)
{
    int i = 1;
    while (i < n) 
    {
        if (b[i] < b[++i]) return 0;
    }
}

void out(int b[], int n)
{
    for (int i = 1; i <= n; i++) printf ("%d ", b[i]);
    printf ("\n");
}

void method(int b[], int n)
{
    init (b, n);
    out (b, n);

    int stop = islast (b, n);

    while (!stop)
    {
        gen(b, n);
        out(b, n);

        stop = islast(b, n);
    }
}

void init(int b[], int n)
{
    int i = 1;
    while ((i) <= n) 
        b[i] = i++;
}