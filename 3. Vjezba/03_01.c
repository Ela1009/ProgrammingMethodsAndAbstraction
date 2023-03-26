#include <stdio.h>
#include <math.h>

int funkcija_potencija (int n, int k)
{
    int potencija=0;

    while (pow(k,potencija)<=n)
    {
        potencija++;

    }
    potencija--;
    while (potencija >= 0)
    {
        int koeficijent = n / pow (k, potencija);
        printf("%d * %d^%d", koeficijent, k, potencija);
        n-=koeficijent * pow (k, potencija);
        if (potencija!=0)
        {
            printf (" + ");
        }

    potencija--;
    }

    return potencija;
}

int main()
 {
    int n = 200;
    int k = 8;
    funkcija_potencija(n, k);
    return 0;
}
