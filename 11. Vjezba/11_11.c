#include <stdio.h>

int prosta_znamenka (int n)
{
    while (n)
    {
        int znamenka=n%10;
        if (znamenka==2 || znamenka==3 || znamenka==5 || znamenka==7)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}

int funkcija (int niz[], int len)
{
    int i=0;
    int brojac=0;
    for (i;i<len;i++)
    {
        if (prosta_znamenka(niz[i])==1)
        {
            brojac++;

        }

    }
    return brojac;
}

int main (void)
{
    int niz[]={123, 144, 24, 23, 15, 88};
    int len=sizeof(niz)/sizeof(niz[0]);
    printf("%d", funkcija (niz,len));

    return 0;
}
