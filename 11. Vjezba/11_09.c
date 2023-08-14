#include <stdio.h>

int funkcija (int niz[], int len)
{
    if (len==1)
    {
        return niz[0];
    }
    else
    {
        int najveci=funkcija (niz, len-1);
        if (niz[len-1]>najveci)
        {
            return niz[len-1];
        }
        else
        {
            return najveci;
        }
    }
}

int main (void)
{
    int niz[]={1,12,7,4};
    int len=sizeof(niz)/sizeof(niz[0]);
    int najveci=funkcija (niz, len);
    printf("Najveci element u nizu je %d", najveci);
    return 0;
}
