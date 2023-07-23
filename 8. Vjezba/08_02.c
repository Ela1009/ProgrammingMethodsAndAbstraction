#include <stdio.h>



int funkcija_palindrom(int broj, int naopako)
{


    if (broj == 0) {
        return naopako;
    }
    else {
        naopako = naopako * 10 + (broj % 10);
        return funkcija_palindrom(broj / 10, naopako);
    }
}

int main()
{
    int broj=101;
    int naopako=funkcija_palindrom(broj, 0);

    if (broj==naopako)
    {
        printf("da");
    }
    else {
        printf("ne");
    }

    return 0;
}
