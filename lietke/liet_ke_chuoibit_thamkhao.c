#include <stdio.h>
void method(int b[], int n);
void init(int b[], int n);
void out(int b[], int n);
int islast(int b[], int n);
void gen(int b[], int n );
int d = 0;
int main()
{
    int n;
    printf("input n = ");
    scanf("%d",&n);
    int b[n+1];
    method(b,n);
    return 0;
}
void init(int b[], int n)
{
    for (int i = 1; i<=n; i++) {
        b[i] = 0;
    }
}
void out(int b[], int n)
{
    printf("%d: ",++d);
    for (int i = 1; i<=n; i++) {
        printf("%d ",b[i]);
    }
    printf("\n");
}
int islast(int b[], int n)
{
    for (int i = 1; i<=n; i++) {
        if (b[i]==0) {
            return 0;
        }
    }
    return 1;
}
void gen(int b[], int n)
{
    int i = n;
    while (b[i]==1) {
        i--;
    }
    b[i] = 1;
    for (int j = i+1; j<=n; j++) {
        b[j] = 0;
    }
}
void method(int b[], int n)
{
    init(b,n);
    out(b,n);
    int stop = islast(b,n);
    while (stop == 0) {
        gen(b,n);
        out(b,n);
        stop = islast(b,n);
    }
}
 