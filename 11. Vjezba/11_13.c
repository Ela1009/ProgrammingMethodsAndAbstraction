#include <stdio.h>

struct interval{
    int pocetak;
    int kraj;
};

struct interval funkcija (struct interval prvi_interval, struct interval drugi_interval)
{
    struct interval presjek;
    if (prvi_interval.kraj>drugi_interval.pocetak)
    {
        presjek.pocetak=drugi_interval.pocetak;
        presjek.kraj=prvi_interval.kraj;
    }
    return presjek;
}


int main (void){
    struct interval prvi_interval = {1,5};
    struct interval drugi_interval = {3,8};
    struct interval presjek=funkcija(prvi_interval, drugi_interval);
    printf("Presjek dva intervala je %d %d", presjek.pocetak, presjek.kraj);

}
