#include <stdio.h>

int funkcija_koraci (int n)
{
    if (n<10)
    {
        return 0;
    }
    else
    {
    int umnozak=1;

    while (n!=0)
    {
        umnozak*=n%10;
        n/=10;

    }
        return 1+funkcija_koraci(umnozak);
    }
}

int main (void)
{
    int n=727;
    int koraci=funkcija_koraci(n);
    printf("%d", koraci);
    return 0;
}
