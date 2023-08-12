#include <stdio.h>
#include <string.h>

char* funkcija_najduzi(char *stringovi[], int len) {

    int i=0;
    int duljina_najduzeg = 0;
    char* najduzi="";
    for (i; i < len; i++) {
        int duljina = strlen(stringovi[i]);
        if (duljina > duljina_najduzeg) {
            najduzi = stringovi[i];
            duljina_najduzeg = duljina;
        }
    }
    return najduzi;
}

int main() {
    char *stringovi[] = {"macka", "pas", "stolica"};
    int len=sizeof(stringovi)/sizeof(stringovi[0]);
    char *najduzi=funkcija_najduzi(stringovi,len);
    int duljina_najduzeg=strlen(najduzi);
    printf("Najduzi string je '%s' a duljina mu je %d\n", najduzi, duljina_najduzeg);
    return 0;
}
