#include <stdio.h>
#include <string.h>

int funkcija_usporedi (char str1[], char str2[])
{
    int rezultat;
    rezultat=strcmp(str1, str2);

        if (rezultat<0)
        {
            return strtok(str1," ");
        }
        else if(rezultat>0)
        {
            return strtok(str2," ");
        }
        else
            return 0;

}

int main (void)
{
    char str1[]="Ana Matic";
    char str2[]="Mate Matic";
    int rezultat=funkcija_usporedi(str1, str2);
    printf("Osoba koja je prije po abecedi je %s", rezultat);
    return 0;

}
