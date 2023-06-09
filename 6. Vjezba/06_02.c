#include <stdio.h>
#include <stdlib.h>

int* funkcija_nula (int n)
{
    int* niz = calloc(n, sizeof(int));
    if (niz == NULL) {
        printf("Memorija nije alocirana\n");
    }

    for(int i = 1; i <= n; i += 2) {
        niz[i-1] = i/2;
    }

    return niz;
}

int main() {
    int n = 10;
    int* niz = funkcija_nula(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    free(niz);
    return 0;
}
