#include <stdio.h>

int funkcija_najmanji_broj(int a, int b, int c)
{
    int najmanji = (a < b) ? a : b;
    najmanji = (najmanji < c) ? najmanji : c;
    return najmanji;
}

int main (void)
{
    int a=4;
    int b=6;
    int c=10;
    printf ("Najmanji broj je: %d\n", funkcija_najmanji_broj (a,b,c));
}
