#include <stdio.h>
#include <stdlib.h>

int *funkcija_spoji (int niz1[], int niz2[], int velicina1, int velicina2, int *velicina3)
{
    int i=0;
    int j=0;
    int k=0;
    int *niz3;

    niz3 = (int*) malloc ((velicina1+velicina2)*sizeof(int));

    for (i = 0; i < velicina1; i++) {
        niz3[k++] = niz1[i];

        for (j = 0; j < velicina2; j++) {
            if (niz1[i] == niz2[j]) {
                break;
            }
        }

        if (j == velicina2) {
            niz3[k++] = niz1[i];
        }
    }

    for (i = 0; i < velicina2; i++) {
        for (j = 0; j < k; j++) {
            if (niz2[i] == niz3[j]) {
                break;
            }
        }

        if (j == k) {
            niz3[k++] = niz2[i];
        }
    }


    *velicina3 = k;

    return niz3;
}

int main() {
    int niz1[] = {1, 3, 5};
    int niz2[] = {2, 4, 6};
    int velicina1 = 3;
    int velicina2 = 3;
    int velicina3;
    int *niz3;
    int i;

    niz3 = funkcija_spoji(niz1, niz2, velicina1, velicina2, &velicina3);

    printf("Novi niz je: ");
    for (int i = 0; i < velicina3; i++) {
        printf("%d ", niz3[i]);
    }

    free(niz3);

    return 0;
}
