#include <stdio.h>

int funkcija_nti_broj (int a1, int d, int n)
{
    int an=a1+(n-1)*d;
    return an;
}

int main (void)
{
    int a1, d, n;
    a1=10;
    d=5;
    n=3;
    int an=funkcija_nti_broj (a1,d,n);
    printf("Trazeni clan je: %d\n", an);

    return 0;

}
