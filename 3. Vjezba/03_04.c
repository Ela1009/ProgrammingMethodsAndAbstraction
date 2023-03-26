
#include <stdio.h>

int funkcija_parni_neparni (int n)
{
    while (n!=1)
    {
    if (n%2==0)
        return n/2;
    else
        return 3*n+1;
    }

}

int main(void)
{
    int a=3;
    int n=funkcija_parni_neparni(a);
    printf("Niz brojeva je: %d\n", n);
    return 0;
}
