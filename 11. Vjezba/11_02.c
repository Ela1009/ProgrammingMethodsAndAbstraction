#include <stdio.h>


void funkcija (int niz[], int len, int* najveci, int* najmanji, int* indeks_najveci, int* indeks_najmanji)
{
    *najveci=niz[0];
    *najmanji=niz[0];

    int i=0;
    for (i; i<len; i++)
    {
        if (niz[i] > *najveci)
        {
            *najveci=niz[i];
            *indeks_najveci=i;
        }
         if (niz[i] < *najmanji)
        {
            *najmanji=niz[i];
            *indeks_najmanji=i;
        }
    }
}

int main (void)
{
    int niz[]={3,2,5,1};
    int len=sizeof(niz)/sizeof(niz[0]);

    int najveci, najmanji, indeks_najveci, indeks_najmanji;
    funkcija (niz, len, &najveci, &najmanji, &indeks_najveci, &indeks_najmanji);

    printf("Indeks najveceg clana je; %d, a najmanjeg: %d ", indeks_najveci, indeks_najmanji);

    return 0;
}
