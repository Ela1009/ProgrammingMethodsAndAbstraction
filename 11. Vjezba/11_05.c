#include <stdio.h>

int funkcija(int niz[], int len)
{
    if (len<=1)
    {
        return 1;
    }

    double omjer=(double)niz[1]/niz[0];

        for (int i = 1; i < len - 1; i++)
            {
            if ((double)niz[i + 1] / niz[i] != omjer)
                {
               return 0;
            }
        }
        return funkcija(niz+1, len-1);



}


int main(void)
{
    int niz[]={1,3,9,27};
    int len=sizeof(niz)/sizeof(niz[0]);
    if (funkcija(niz,len)==1)
    {
         printf("da");
    }
    else
    {
           printf("ne");
    }


    return 0;
}
