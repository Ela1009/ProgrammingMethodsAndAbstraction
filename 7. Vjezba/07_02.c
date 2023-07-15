#include <stdio.h>
#include <string.h>

int funkcija_broj_char (char str[], char ch)
{
    int brojac = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            brojac++;
        }
        i++;
    }
    if (brojac == 0) {
        return -1;
    }
    return brojac;
}

int main() {
    char str[] = "pma";
    char ch = 'm';
    int brojac = funkcija_broj_char(str, ch);
    if (brojac == -1) {
        printf("Znak se ne javlja");
    } else {
        printf("Znak '%c' javlja se %d u stringu '%s'\n", ch, brojac, str);
    }
    return 0;
}
