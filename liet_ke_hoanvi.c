#include <Stdio.h>

#define TRUE 1
#define FALSE 0

void method(int b[], int n);
void init(int b[], int n);
void out(int b[], int n);
int islast(int b[], int n);
void gen(int b[], int n);
void swap(int b[], int i, int j);

int main()
{
    int n;
    printf ("Nhap n: ");
    scanf ("%d", &n);

    int b[n];

    return 0;
}

void gen(int b[],int n)
{
    
}

int islast (int b[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] < b[i + 1]) return FALSE;
    }
    return TRUE;
}

void method (int b[], int n)
{
    init(b, n);
    out(b, n);

    int stop = islast(b, n);

    while (!stop) {
        gen(b, n);
        out(b, n);

        stop = islast(b, n);
    }
}

void init (int b[], int n)
{
    printf ("Nhap cac phan tu: ");
    for (int i = 0; i < n; i++) b[i] = i + 1;
}

void out (int b[], int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", b[i]);
    printf ("\n");
}

void swap(int b[], int i, int j) 
{
    int tmp = b[i];
    b[i] = b[j];
    b[j] = tmp;
}
