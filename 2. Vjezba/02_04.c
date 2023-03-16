#include <stdio.h>

int funkcija_zbroji_znamenke(unsigned int x){
    int brojac=0;
    while(x!=0)
    {
    x=x/10;
    brojac+=1;
    }
    return brojac;
}

int main(void)
{
    unsigned int a;
    printf("Unesite broj:\n");
    scanf("%u", &a);
    int zbroj=funkcija_zbroji_znamenke(a);
    printf("Broj znamenki: %d\n", zbroj);

    return 0;
}

