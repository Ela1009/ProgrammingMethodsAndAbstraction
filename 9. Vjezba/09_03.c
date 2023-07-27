#include <stdio.h>

struct tocka{
    int x;
    int y;
};

struct pravokutnik{
    struct tocka t1;
    struct tocka t2;

};

int opseg (struct pravokutnik *p)
{
    int a=p->t2.x-p->t1.x;
    int b=p->t2.y-p->t1.y;
    int opseg=2*(a+b);
    return opseg;
}

struct pravokutnik najveci(struct pravokutnik niz[], int n) {

  struct pravokutnik najveci_pravokutnik = niz[0];
  int najveci_opseg = opseg(&najveci_pravokutnik);

  for (int i = 0; i <= n; i++) {
    struct pravokutnik trenutni = niz[i];
    int trenutni_opseg = opseg(&trenutni);

    if (trenutni_opseg > najveci_opseg) {
      najveci_pravokutnik = trenutni;
      najveci_opseg = trenutni_opseg;
    }
  }

  return najveci_pravokutnik;
}


int main (void)
{
    struct pravokutnik prvi = {{0, 0}, {3, 4}};
    struct pravokutnik drugi = {{2, 3}, {5, 8}};
    struct pravokutnik treci = {{1, 2}, {6, 1}};
    struct pravokutnik niz[3]={prvi,drugi,treci};
    struct pravokutnik najveci_pravokutnik = najveci(niz, 3);

    printf("Najveci pravokutnik (%d, %d), (%d, %d) sa opsegom %d\n",
            najveci_pravokutnik.t1.x, najveci_pravokutnik.t1.y, najveci_pravokutnik.t2.x, najveci_pravokutnik.t2.y,opseg(&najveci_pravokutnik));

    return 0;

}
