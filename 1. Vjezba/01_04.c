#include <stdio.h>

int main(void)
{
    int p1,k1,p2, k2;
    printf("Unesite granice prvog intervala: \n");
    scanf("%d %d", &p1, &k1);
    printf("Unesite granice drugog intervala: \n");
    scanf("%d %d", &p2, &k2);

    int pocetak,kraj;

    if (p1<=p2)
        pocetak=p2;
    if (p2<=p1)
        pocetak=p1;
    if (k1<=k2)
        kraj=k1;
    if (k2<=k1)
        kraj=k2;
    if (kraj>pocetak)
        printf("%d,%d", pocetak, kraj);
    else
        printf("Rjesenje je prazan skup\n");


    return 0;

}
