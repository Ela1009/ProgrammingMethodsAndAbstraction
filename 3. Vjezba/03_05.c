#include <stdio.h>

int funkcija_datum_validan (int dan, int mjesec, int godina)
{
    if ((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        printf("validan - godina je prijestupna\n");
    else if ((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        printf("validan - godina je prijestupna\n");
    else if ((dan>=1 && dan<=29) && (mjesec==2) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        printf("validan - godina je prijestupna\n");
    else if ((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11) && (godina>=1900 && godina<=2019))
        printf("validan - godina nije prijestupna\n");
    else if ((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12) && (godina>=1900 && godina<=2019))
        printf("validan - godina nije prijestupna\n");
    else if ((dan>=1 && dan<=28) && (mjesec==2) && (godina>=1900 && godina<=2019))
        printf("validan - godina nije prijestupna\n");
    else
        printf("datum nije validan\n");

}

int main (void)
{
    int dan, mjesec, godina, n;
    printf("Unesite broj datuma za provjeru: \n");
    scanf("%d", &n);
    while (n!=0)
    {
        printf("Unesite datum rodenja: \n");
        scanf("%d %d %d", &dan, &mjesec, &godina);
        funkcija_datum_validan(dan, mjesec, godina);
        n=n-1;
    }

    return 0;
}
