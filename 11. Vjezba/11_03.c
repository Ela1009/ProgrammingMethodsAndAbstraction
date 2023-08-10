#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* funkcija_znak_po_znak(char* datoteka)
{
    FILE* file = fopen(datoteka, "r");

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* novi = (char*)malloc((fileSize + 1) * sizeof(char));
    if (novi == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return NULL;
    }
    strcpy(novi, "");

    int index = 0;
    char znak;

    while ((znak = fgetc(file)) != EOF)
    {
        if (islower(znak))
        {
            novi[index++] = znak;
        }
    }

    novi[index] = '\0';

    fclose(file);
    return novi;
}

int main(void)
{
    char* datoteka = "tekst.txt";
    char* rezultat = funkcija_znak_po_znak(datoteka);
    if (rezultat != NULL) {
        printf("%s\n", rezultat);
        free(rezultat);  // Free the allocated memory when it's no longer needed
    }
    return 0;
}

