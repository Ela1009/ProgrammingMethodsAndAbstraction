#include <stdio.h>
#define KUBIRANJE(x) ((x)*(x)*(x))

struct niz_cijelih_brojeva {
    int* niz;
    int broj;
};

void suma_produkt (struct niz_cijelih_brojeva* niz_struktura, int* suma, int* produkt)

{
    *suma = 0;
    *produkt = 1;
    for (int i = 0; i < niz_struktura->broj; i++) {
        int kub = KUBIRANJE(niz_struktura->niz[i]);
        *suma += kub;
        *produkt *= kub;
    }
}

int main() {
    int brojevi_u_nizu[] = {1, 2, 3};
    struct niz_cijelih_brojeva niz = {brojevi_u_nizu, 3};
    int suma, produkt;
    suma_produkt(&niz, &suma, &produkt);
    printf("Suma: %d, produkt kubova: %d\n", suma, produkt);
    return 0;
}
