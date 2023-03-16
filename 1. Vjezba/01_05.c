#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,y,x;
    printf("Unesite dva broja: \n");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        y=a+rand()%(b-+1);
        x=a+rand()%(b-+1);
        printf("%d %d\n", y,x);

    if (y>x)
        printf("Veci broj je: %d", y);
    else
        printf("Veci broj je %d", x);

    }

    if (a > b)
    {
        y=b+rand()%(a-+1);
        x=b+rand()%(a-+1);
        printf("%d %d\n", y,x);

    if (y>x)
        printf("Veci broj je: %d", y);
    else
        printf("Veci broj je %d", x);

    }

    return 0;

}
