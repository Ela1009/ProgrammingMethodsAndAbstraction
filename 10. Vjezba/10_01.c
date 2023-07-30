#include <stdio.h>

int funkcija_velicina(char* datoteka) {
    FILE* fp = fopen(datoteka, "r");

    if (fp == NULL) {
        printf("Greska\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    return ftell(fp);

    fclose(fp);
}

int main(void)
 {
    char* datoteka = "tekst.txt";
    int velicina = funkcija_velicina(datoteka);

    if (velicina != 1)
    {
        printf("Velicina datoteke '%s' je %d bajta\n", datoteka, velicina);
    }

    return 0;
}

