#include <stdio.h>

char* strcpy(char* destinacija, char* izvor)
{
    int i = 0;
    while (izvor[i] != '\0') {
        destinacija[i] = izvor[i];
        i++;
    }
    destinacija[i] = '\0';
    return destinacija;
}

int main() {
    char izvor[100] = "aaaa";
    char destinacija[100];
    printf(strcpy(destinacija, izvor));
    return 0;
}
