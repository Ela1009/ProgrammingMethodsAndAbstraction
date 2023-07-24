#include <stdio.h>

void funkcija_neparni_unazad (int n)
{
    if (n==0)
    return;
    if (n%2==1)
    printf ("%d\n", n);
    funkcija_neparni_unazad(n-1);

}

int main (void)
{
    int n=10;
    funkcija_neparni_unazad(n);

    return 0;
}
