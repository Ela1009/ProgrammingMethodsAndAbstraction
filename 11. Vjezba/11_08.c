#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int sortiraj (const void* a, const void* b)
{
    char char_a=*((char*)a);
    char char_b=*((char*)b);

    if (char_a < char_b)
    {
        return -1;
    }
    else if (char_a > char_b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char* funkcija(char*string)
{
    char* novi = (char*)malloc((strlen(string)+1)*sizeof(char));
    int i=0;
    int j=0;
    for (i; i<strlen(string); i++)
    {
        if (islower(string[i]))
        {
            novi[j]=string[i];
            j++;
        }
    }
    novi[j] = '\0';

    qsort(novi, strlen(novi), sizeof(char), sortiraj);

    return novi;
}

int main (void)
{
    char* string="Psa su 3, a macke 2.";
    char* novi=funkcija(string);
    printf("%s\n", novi);
    free(novi);
    return 0;
}
