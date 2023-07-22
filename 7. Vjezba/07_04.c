#include <stdio.h>
#include <string.h>

int funkcija_godine (char datum[])
{
    int dan, mjesec, godina, dob;
    sscanf (datum, "%d.%d.%d", &dan, &mjesec, &godina);
    return 2023-godina;
}

int main (void)
{
    char datum[]="01.01.2000";
    int dob;
    dob=funkcija_godine(datum);
    printf("Osoba ima %d godina", dob);
    return 0;
}
