#include <stdio.h>

void funkcija_prepolovi_pomnozi (int m, int n, int* kolicnik, int* produkt)
{
    if (m%2==0)
    {
        *kolicnik=m/2;
    }
    else
    {
        *kolicnik=m;
    }
        *produkt=(3*n+1);
}

int main (void)
{
    int m, n, kolicnik, produkt;
    printf("Unesite dva cijela broja m i n:\n");
    scanf("%d %d", &m, &n);
    funkcija_prepolovi_pomnozi(m, n, &kolicnik, &produkt);
    printf("Nove vrijednosti broja m i n su %d i %d\n", kolicnik, produkt);

    return 0;
}

