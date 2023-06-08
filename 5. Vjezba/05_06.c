#include <stdio.h>

void funkcija_unos (int a[], int len)
{
    int i=0;
    printf("Unesi niz: \n");
    for (i; i<len; i++)
    {
        scanf("%d", &a[i]);
    }

}

void funkcija_ispis (int a[], int len)
{
    int i=0;
    printf("Ispis niza: \n");
    for (i; i<len; i++)
    {
        printf("%d\t", a[i]);

    }
    printf("\n");

}

float funkcija_prosjek_niz (int a[], int len)
{
    float zbroj=0;
    int i=0;
    for (i; i<len; i++)
    {
        zbroj+=a[i];
    }
    return zbroj/len;
}

int main (void)
{
    int n=5, a[5];
    funkcija_unos (a, n);
    funkcija_ispis (a, n);
    printf("Prosjek je: %f\n", funkcija_prosjek_niz (a, n));
    return 0;
}

