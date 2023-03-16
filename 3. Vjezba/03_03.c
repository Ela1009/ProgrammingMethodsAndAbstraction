#include <stdio.h>

int funkcija_parni_neparni (int n)
{
    if (n%2==0)
        return n/2;
    else
        return 3*n+1;
}

