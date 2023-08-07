#include <stdio.h>

typedef struct {
    int x1, y1;
    int x2, y2;
} pravokutnik;

pravokutnik funkcija_pravokutnik(char* datoteka) {
    pravokutnik najveci_pravokutnik;
    FILE* fp = fopen(datoteka, "r");

    int najveci_x = 0;
    int najveci_y = 0;

    while (!feof(fp)) {
        int x1, y1, x2, y2;
        fscanf(fp, "(%d, %d), (%d, %d)\n", &x1, &y1, &x2, &y2);

        int razlika_x = x2 - x1;
        int razlika_y = y2 - y1;

        if (razlika_x > najveci_x && razlika_y > najveci_x) {
            najveci_pravokutnik.x1 = x1;
            najveci_pravokutnik.y1 = y1;
            najveci_pravokutnik.x2 = x2;
            najveci_pravokutnik.y2 = y2;
            najveci_x = razlika_x;
            najveci_y = razlika_y;
        }
    }

    fclose(fp);

    return najveci_pravokutnik;
}

int main(void)
 {
    pravokutnik najveci_pravokutnik = funkcija_pravokutnik("pravokutnik.txt");

    printf("najveci pravokutnik:\n");
    printf("(%d, %d)(%d, %d)\n", najveci_pravokutnik.x1, najveci_pravokutnik.y1, najveci_pravokutnik.x2, najveci_pravokutnik.y2);

    return 0;
}
