#include <stdio.h>

int funkcija_suma_niza (int niz[], int len)
{
    int zbroj=0, i=0;
    for (i; i<len; i+=2)
    {
        zbroj+=niz[i];

    }
    return zbroj;
}

int main (void)
{
    int niz[5]={1,2,3,4,5};
    int zbroj=funkcija_suma_niza(niz, 5);
    printf("Zbroj neparnih elemenata u nizu je: %d\n", zbroj);
    return 0;
}
