#include <stdio.h>
int main(void)
{
    int x,y,z,x2,y2,z2;
    printf("Unesite pocetak filma: \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Unesite kraj filma: \n");
    scanf("%d %d %d", &x2, &y2, &z2);
    if (x2>x)
    {
        printf("Trajanje filma u satima %d\n", x2-x);
        printf("Trajanje filma u minutama %d\n", y2-y);
        printf("Trajanje filma u sekundama %d\n", z2-z);
    }

    else
    {
        printf("Trajanje filma u satima %d\n", (24-x)+x2);
        printf("Trajanje filma u minutama %d\n", (0-y)+y2);
        printf("Trajanje filma u sekundama %d\n", (0-z)+z2);
    }



    return 0;
}
