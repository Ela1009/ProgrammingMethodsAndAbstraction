#include <stdio.h>

int funkcija_suma(int n, int m)
 {
    if (n == 0)
        {
        return 0;
    }
    else
        {
        int zadnji = m * n;
        return zadnji+funkcija_suma(n-1,m);
    }
}


int main(void) {
    int n = 3;
    int m = 2;
    int rezultat = funkcija_suma(n, m);
    printf("Suma prvih %d brojeva djeljivih sa %d je %d.\n", n, m, rezultat);
    return 0;
}

