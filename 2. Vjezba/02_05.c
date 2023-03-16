#include <stdio.h>

int funkcija_zbroj (int a, int b, int n)

{
    int suma=0;
    for (int i=a; i<=b; i=i+n)
    {
    suma+=i;
    }
    return suma;
}

int main(void)
{
    int a, b, n;
    printf("Unesite interval a i b:\n");
    scanf("%d %d", &a, &b);
    printf("Unesite broj n:\n");
    scanf("%d", &n);
    int suma=funkcija_zbroj(a,b,n);
    printf("suma: %d\n", suma);

    return 0;
}


