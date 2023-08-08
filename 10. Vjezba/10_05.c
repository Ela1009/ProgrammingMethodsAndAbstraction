#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} point;

int funkcija_usporedi(const void* a, const void* b) {
    point* tocka_A = (point*)a;
    point* tocka_B = (point*)b;

    if (tocka_A->x == tocka_B->x && tocka_A->y == tocka_B->y)
        return 0;

        return -1;

}

int main() {
    point tocke[] = {{1, 2},{3, 4},{5, 6},};

    int broj_tocaka = sizeof(tocke) / sizeof(tocke[0]);

    point trazena_tocka;
    printf("Unesite koordinate tocke: (x y): ");
    scanf("%d %d", &trazena_tocka.x, &trazena_tocka.y);

    point* trazi = (point*)bsearch(&trazena_tocka, tocke, broj_tocaka, sizeof(point), funkcija_usporedi);

    if (trazi != NULL) {
        printf("Tocka (%d, %d) pronadena\n", trazi->x, trazi->y);
    } else {
        printf("Tocka (%d, %d) nije pronadena\n", trazena_tocka.x, trazena_tocka.y);
    }

    return 0;
}

