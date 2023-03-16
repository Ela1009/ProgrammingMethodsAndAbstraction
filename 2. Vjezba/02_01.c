#include <stdio.h>

int main(void)
{
    char ime, prezime;
    char max_ime='A', max_prezime='A', min_ime='Z'+1, min_prezime='Z'+1;

    while(1)
    {

    printf("Unesite inicijale: \n");
    scanf(" %c %c", &ime, &prezime);

    if (prezime=='0' || ime=='0')
        break;

    if (prezime<min_prezime){
        min_prezime = prezime;
        min_ime=ime;
    }
    if (prezime == min_prezime && min_ime>ime){
        min_ime=ime;
    }

    if (prezime>max_prezime){
        max_ime=ime;
        max_prezime=prezime;
    }

    if (prezime == max_prezime && max_ime<ime){
        max_ime=ime;
    }


    printf("Prva osoba po abecedi: %c %c \n", min_prezime, min_ime);
    printf("Zadnja osoba po abecedi: %c %c \n", max_prezime, max_ime);

    }
    return 0;
}
