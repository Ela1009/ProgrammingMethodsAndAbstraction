#include <stdio.h>

int funkcija_prijestupna (int dan, int mjesec, int godina)

{
    if ((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        return (2023-godina);
    else if ((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        return (2023-godina);
    else if ((dan>=1 && dan<=29) && (mjesec==2) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        return (2023-godina);
    else if ((dan==29) && (mjesec==2) && (godina>=1900 && godina<=2019) && (godina%4==0 && godina%100!=0) || (godina%400==0))
        return (2023-godina)/4;
    else if ((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11) && (godina>=1900 && godina<=2019))
        return (2023-godina);
    else if ((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12) && (godina>=1900 && godina<=2019))
        return (2023-godina);
    else if ((dan>=1 && dan<=28) && (mjesec==2) && (godina>=1900 && godina<=2019))
        return (2023-godina);
    else
        printf("datum nije validan\n");

}

int main(void)
{
    int dan, mjesec, godina;
    printf("Unesite datum rodenja: \n");
    scanf("%d %d %d", &dan, &mjesec, &godina);
    int broj=funkcija_prijestupna(dan, mjesec, godina);
    printf("Broj rodendana je: %d \n", broj);


    return 0;
}
