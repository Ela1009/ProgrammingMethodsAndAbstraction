#include <stdio.h>

int funkcija_suma_niza (int niz[], int velicina)
{
    int zbroj=0;
    for (int i=1; i<velicina; i+=2)
    {
        zbroj+=niz[i];

    }
    return zbroj;
}

int main (void)
{
    int niz[]={1,2,3,4,5};
    int velicina=sizeof(niz)/sizeof(niz[0]); //ovo nan daje ukupan broj elemenata u nizu. sizeof(niz) je 20 (5 elemenata*4 bajta) a sizeof(niz[0]) je 4 (velicina integera)
    int zbroj=funkcija_suma_niza(niz, velicina);
    printf("Zbroj neparnih elemenata u nizu je: %d\n", zbroj);
    return 0;
}
