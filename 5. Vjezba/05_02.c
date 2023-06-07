#include <stdio.h>

void funkcija_suma_produkt (int n, int* psuma, int* pprodukt)
{
    int znamenka;
    *psuma=0;
    *pprodukt=1;

    while(n)
    {
        znamenka= n % 10 ;
        *psuma += znamenka;
        *pprodukt *= znamenka;
        n /= 10;
    }
}

int main (void)
{
    int n=1234;
    int s, p;
    funkcija_suma_produkt (n, &s, &p);
    printf("suma je: %d produkt je: %d\n", s, p);
    return 0;
}
