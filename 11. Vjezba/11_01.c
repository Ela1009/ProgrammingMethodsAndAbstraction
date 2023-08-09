#include <stdio.h>
#include <string.h>


int funkcija (char* datoteka, char* string)
{
    FILE* file = fopen(datoteka, "r");

    if (file == NULL)
    {
        printf("Greska \n");
        return -1;
    }

    char buffer [256];
    int brojac=0;

    while (fgets(buffer, sizeof(buffer), file)!=NULL)
    {
        if (strstr(buffer,string)!=NULL)
        {
            brojac++;
        }
    }

    return brojac;
    fclose (file);
}

int main (void)
{
    char* datoteka="tekst.txt";
    char* string="rijec";
    int broj_javljanja=funkcija (datoteka, string);
    printf("Broj javljanja stringa u datoteci je %d", broj_javljanja);
    return 0;
}
