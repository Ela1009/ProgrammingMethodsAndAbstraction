#include <stdio.h>



char* funkcija_znak_po_znak (char* datoteka)
{
    char znak = ' ';
    FILE* fp = fopen(datoteka, "r");

    char* ptr=(char*) malloc(10*sizeof(char));
    strcpy(ptr,"");

    while ((znak=fgetc(fp))!= EOF)
    {
        //printf("%c", znak);

        strncat(ptr, &znak, 1);
    }

    fclose(fp);
    return ptr;
}

int main (void)
{
    char* datoteka = "tekst.txt";
    printf("%s", funkcija_znak_po_znak(datoteka));
    return 0;
}
