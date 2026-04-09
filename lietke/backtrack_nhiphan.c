#include <stdio.h>
#define MAX 100

char S[100];

void Out (int n);
void Try (int i, int n);

int main()
{
    int n;
    scanf ("%d", &n);
    Try(1, n);
}

void Try (int i, int n)
{
    char j;
    for (j = '0'; j <= '1'; j++)
    {
        S[i] = j;
        if (i == n) Out(n);
        else Try(i + 1, n);
    }
}

void Out (int n)
{
    for (int i = 1; i <= n; i++)
        printf ("%c ", S[i]);
    printf ("\n");
}