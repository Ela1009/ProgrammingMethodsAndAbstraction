#include <stdio.h>

int funkcija_binarni_zapis (int n)
{
    int i, flag=1;
    for (i = sizeof(n)*8-1; i>=0; i--)
    {
        if (n & (1 << i))
        {
            flag=0;
            printf("1");
        }

        else if (!flag || i == 0) //ako flag nije istinit tj ako je dosad bia bit koji nije 0 ili ako smo dosli do namanje znacajnog bita
            printf("0");
    }

}

int main (void)
{
    int a=2023;
    printf("Broj u binarnom zapisu je: %d\n", funkcija_binarni_zapis(a));
}
