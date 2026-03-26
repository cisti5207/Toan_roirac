#include <stdio.h>

#define MAX 100

int S[MAX], p[MAX];

void Inp(int n);
void Out(int n);
void Try(int i, int n);

int main()
{
    int n;
    scanf ("%d", &n);
    Inp(n);
    Try(1, n);
}

void Try(int i, int n)
{
    for (int j = 1; j <= n; j++)
    {
        if (p[j] == 1)
        {
            S[i] = j;
            p[j] = 0;
            if (i == n) Out(n);
            else Try(i + 1, n);
            p[j] = 1;
        }
    }
}

void Out(int n)
{
    for (int i = 1; i <= n; i++)
        printf ("%d", S[i]);
    printf ("\n");
}

void Inp(int n)
{
    for (int i = 1; i <= n; i++)
        p[i] = 1;
}