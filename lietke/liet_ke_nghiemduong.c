#include <stdio.h>

#define MAX 100
typedef unsigned int uint;
uint x[MAX];
uint max;

void Out(uint n);
void Try (uint i, uint n, uint Sum);

int main(){
    uint n, Sum = 0;
    printf ("Nhap n: ");
    scanf ("%u", &n);

    printf ("Nhap gia tri lon nhat: ");
    scanf ("%u", &max);
    Try(1, n, Sum);
}

void Try(uint i, uint n, uint Sum)
{
    for (uint j = 0; j <= max; j++){
        x[i] = j;

        if (Sum + j > max) return;

        if (i == n) {
            if (Sum + j == max) Out(n);
        }
        else Try(i + 1, n, Sum + j);
    }
}

void Out(uint n)
{
    for (int i = 1; i <= n; i++)
        printf ("%3d", x[i]);
    printf ("\n");
}