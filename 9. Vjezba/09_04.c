#include <stdio.h>

struct stol
{
    int duljina;
    int sirina;
    int visina;
};

int povrsina (struct stol *p)
{
    int povrsina=p->duljina*p->sirina;
    return povrsina;
}

struct stol najveci(struct stol niz[], int n) {

  struct stol najveci_stol = niz[0];
  int najveca_povrsina = povrsina(&najveci_stol);

  for (int i = 0; i < n; i++) {
    struct stol trenutni = niz[i];
    int trenutna_povrsina = povrsina(&trenutni);

    if (trenutna_povrsina > najveca_povrsina) {
      najveci_stol = trenutni;
      najveca_povrsina = trenutna_povrsina;
    }
  }

  return najveci_stol;
}


int main (void)
{
    struct stol prvi = {1,2,3};
    struct stol drugi = {4,5,6};
    struct stol treci = {7,8,9};
    struct stol niz[3]={prvi,drugi,treci};
    struct stol najveci_stol = najveci(niz, 3);

    printf("Najveci stol %d %d %d sa povrsinom %d\n", najveci_stol.duljina, najveci_stol.sirina, najveci_stol.visina, povrsina(&najveci_stol));

    return 0;

}

