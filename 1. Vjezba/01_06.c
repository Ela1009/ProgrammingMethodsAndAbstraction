#include <stdio.h>
int main(void)
{
    int x;
    printf("Unesite broj: \n");
    scanf("%d", &x);
    printf("Broj kovanica od 5 kn: %d\n", x/5);
    printf("Broj kovanica od 2 kn: %d\n", (x%5)/2);
    printf("Broj kovanica od 1 kn: %d\n", (x%5)%2);

    return 0;
}
