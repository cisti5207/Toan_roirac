#include <stdio.h>
void method (int b[], int n);
void init (int b[], int n);
void out (int b[], int n);
int islast (int b[], int n);
void gen (int b[], int n);

int main (){
    int n;
    printf ("Nhap gia tri n: ");
    scanf ("%d", &n);
    int b[n];
    method(b, n);
    return 0;
}

void method (int b[], int n) {
    init(b, n);
    out(b, n);

    int stop = islast(b, n);
    while (!stop)
    {
        gen(b, n);
        out(b, n);
        stop = islast (b, n);
    }
}

void init (int b[], int n) {
    while (n--)
        b[n] = 0;
}

void out (int b[], int n) {
    for (int i = 0; i < n; i++)
        printf ("%d ", b[i]);
    printf ("\n");
}

int islast (int b[], int n) {
    while (n--) {
        if (!b[n]) return 0;
    }
    return 1;
}

void gen (int b[], int n) {
    int flag_bit = 1;
    while (n--) {
        if (b[n]) {
            if (flag_bit){
                b[n] = 0;
            }
        }
        else {
            if (flag_bit) {
                flag_bit = 0;
                b[n] = 1;
            }
        }
    }
}