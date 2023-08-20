#include <stdio.h>

void spoji (int niz1 [], int len1, int niz2[], int len2, int niz3[], int len3)
{
    int i=0;
    int j=0;
    int k=0;


    for (k; i<len3; k++)
    {
        if (k%2==0)
        {
            niz3[k]=niz1[i];
            i++;
        }
        else
        {
            niz3[k]=niz2[j];
            j++;
        }
    }
}


int main (void)
{
    int niz1[]={1,2,3};
    int len1=sizeof(niz1)/sizeof(niz1[0]);

    int niz2[]={4,5,6,7};
    int len2=sizeof(niz2)/sizeof(niz2[0]);

    int niz3[100];

    int len3;
    if (len1<len2)
    {
        len3=len1*2;
    }
    else if (len1>len2)
    {
        len3=len2*2;
    }

    spoji(niz1, len1, niz2, len2, niz3, len3);

    int i=0;


    for (i; i<len3; i++)
    {
        printf ("%d ", niz3[i]);

    }
    return 0;
}


