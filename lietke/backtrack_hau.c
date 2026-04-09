#include <stdio.h>
#include <math.h>

/*
    x x x x x x x
    x x x x x x x
    x x x x x x x
    x x x x x x x
    x x x x x x x
    x x x x x x x

    x1 - x2 = y1 - y2
*/

#define MAX_CAP 100
#define TRUE 1
#define FALSE 0

int x[MAX_CAP], y[MAX_CAP];

void init (int n);
void out (int n);
int check(int pos, int n);
void try(int i, int n);

int main()
{
    int n;
    printf ("n = ");
    scanf ("%d", &n);
    init(n);

}

void try(int i, int n)
{
    for (int j = 1; j <= n; j++)
    {
        if 
    }
}

int check (int pos, int n)
{
    int tmp_x, tmp_y;
    for (int i = 1; i <= n; i++)
    {
        tmp_x = abs (x[i] - x[pos]);
        tmp_y = abs (i - pos)
        if (tmp_x == tmp_y) return FALSE;
    }
    return TRUE;
}

void out (int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (x[i] == j) printf ("%3d", j);
            else printf ("%3s", "");
        }
}

void init (int n)
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = 0, y[i] = 0;
    }
}


