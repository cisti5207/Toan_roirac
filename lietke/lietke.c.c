#include <stdio.h>

#define MAX 100
typedef unsigned int uint;

uint x[MAX];
uint maxVal;

void Out(uint n);
void Try(uint i, uint n, uint Sum);

int main(){
    uint n;

    printf("Nhap n: ");
    scanf("%u", &n);

    printf("Nhap tong can dat (max): ");
    scanf("%u", &maxVal);

    Try(1, n, 0);
    return 0;
}

void Try(uint i, uint n, uint Sum)
{
    for (uint j = 0; j <= maxVal; j++){
        x[i] = j;

        if (Sum + j > maxVal) continue; 

        if (i == n){
            if (Sum + j == maxVal)
                Out(n);
        }
        else {
            Try(i + 1, n, Sum + j);
        }
    }
}

void Out(uint n)
{
    for (uint i = 1; i <= n; i++)
        printf("%3u", x[i]);
    printf("\n");
}