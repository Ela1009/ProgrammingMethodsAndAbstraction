#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void funkcija_izbaci (char* ulazna_datoteka, char* izlazna_datoteka)
{
    FILE* ulaz = fopen(ulazna_datoteka, "r");
    FILE* izlaz = fopen(izlazna_datoteka, "w");

    char red[1024];
    char novi_red[1024];

        int j = 0;
        int i = 0;
        for (i; red[i] != '\0'; i++) {
            if (!ispunct(red[i]) && !isspace(red[i])) {
                novi_red[j] = red[i];
                j++;
            }
        }
       novi_red[j] = '\0';

        if (strlen(novi_red) > 0) {
            fprintf(izlazna_datoteka, "%s\n", novi_red);
        }

    fclose(ulaz);
    fclose(izlaz);
}

int main(void)
{
    char ulazna_datoteka[256];
    char izlazna_datoteka[256];

    printf("Unesite ime ulazne datoteke: ");
    scanf("%s", ulazna_datoteka);

    printf("Unesite ime izlazne datoteke: ");
    scanf("%s", izlazna_datoteka);

    funkcija_izbaci(ulazna_datoteka, izlazna_datoteka);

    return 0;
}


