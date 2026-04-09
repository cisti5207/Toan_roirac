#include <stdio.h>

#define NEXT 1
#define STOP 0

void gen(int , int , int *);

void methode(int , int , int *);
int islast(int , int , int *);
void out(int , int *);
void init(int , int *);

int main() {
    int n = 6;
    int a[10];

    int k;
    
    for (k = 1; k <= n; k++)
        methode(k, n, a);
}

void gen(int k, int n, int *a)
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;

    a[i]++;

    int j;
    for (j = i + 1; j <= k; j++)
        a[j] = a[j-1] + 1;
}

void methode(int k, int n, int *a)
{
    init (k, a);
    out(k, a);

    int stop = islast(k, n, a);
    while (stop == NEXT){
        gen(k, n, a);
        out(k, a);

        stop = islast(k, n, a);
    }
}

int islast(int k, int n, int *a)
{
    int i;
    for (i = 1; i <= k; i++)
        if (a[i] != n - k + i) return NEXT;
    
    return STOP;
}

void out(int k, int *a){
    int i;
    for (i = 1; i <= k; i++)
        printf ("%c ", 'A' + a[i] - 1);

    printf ("\n");
}

void init(int k, int *a){
    int i;
    for (i = 1; i <= k; i++){
        a[i] = i;
    }
}