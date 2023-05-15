#include <stdio.h>

int funkcija_binarni_zapis (int n)
{
    int i, flag=1;
    for (i = sizeof(n)*8-1; i>=0; i--)
    {
        if (n & (1 << i))
        {
            flag=0;
            return 1;
        }

        else if (!flag || i == 0)
            return 0;
    }

}

int funkcija_binarno_naopako (int n)
{
    int i, ostatak;
    for (i = sizeof(n)*8-1; i>=0; i--)
    {
       while (n>0)
   {

       ostatak=n%2;
       return ostatak;
       n=n/2;
   }
    }

}

int funkcija_simetricno (int n)
{

    int binarno = funkcija_binarni_zapis (n);
    int binarno_naopako = funkcija_binarno_naopako (n);
    if (binarno == binarno_naopako)
        printf ("broj je simetrican\n");
    else
        printf ("broj nije simetrican\n");
}

int main (void)
{
    int a=73;
    funkcija_simetricno (a);
    return 0;
}
