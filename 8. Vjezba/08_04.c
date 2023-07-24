#include <stdio.h>
#include <string.h>

int funkcija_string (char string[], char ch, int broj, int index, int brojac)
{
    if (string[index] == '\0')
        {
         if (brojac < broj)
         {
            return -1;
        }
    else {
            return index;
        }
    }

    if (string[index] == ch) {
        brojac++;
        if (brojac == broj) {
            return index;
        }
    }
    return funkcija_string(string, ch, broj, index + 1, brojac);
}



int main (void)

{
    char string[]="banana";
    char ch='a';
    int broj=2; //return 3
    int index=funkcija_string(string, ch, broj, 0, 0);
     if (index == -1) {
        printf("ne postoji znak na tom mjestu");
    } else {
        printf("%d\n", index);
    }
    return 0;
}
