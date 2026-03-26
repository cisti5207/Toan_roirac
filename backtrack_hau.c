#include <stdio.h>

#define MAX 1000

int x[MAX], a[MAX], b[MAX], c[MAX]; 

void Try (int i, int n);
void Out (int n);

int main()
{
    int n;
    printf ("nhap n: ");
    scanf ("%d", &n);
}

void Try (int i, int n)
{
    for 
}

void Out (int n)
{
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (x[i] != j) printf ("%3d", j);
            else printf ("%3s", "");
        }
        printf ("\n");
    }
}
