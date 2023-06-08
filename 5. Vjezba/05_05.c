#include <stdio.h>

int funkcija_suma_produkt (int niz[], int m, int n)
{
    int suma = 0;
    int produkt = 1;

    for (int i = m-1; i<=n-1; i++) {
        suma += niz[i];
        produkt *= niz[i];
    }

    printf("Zbroj je: %d\n", suma);
    printf("Produkt je: %d\n", produkt);
}


int main(void)
{
    int niz[100];
    int len, m, n;
    printf("Unesite broj clanova niza (manji od 100): \n");
    scanf("%d", &len);
    int i=0;
    printf("Unesi niz: \n");
    for (i; i<len; i++)
    {
        scanf("%d", &niz[i]);
    }
    printf("Unesite dva broja m i n da su manji od %d: \n", len);
    scanf("%d %d", &m, &n);
    funkcija_suma_produkt (niz, m, n);
    return 0;
}
