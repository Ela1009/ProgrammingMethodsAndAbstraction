#include <stdio.h>
#include <math.h>

typedef struct{
    float realni;
    float imaginarni;
}kompleksni;

kompleksni zbroji(kompleksni a,kompleksni b) {
    kompleksni zbroj;
    zbroj.realni = a.realni + b.realni;
    zbroj.imaginarni = a.imaginarni + b.imaginarni;
    return zbroj;
}

kompleksni pomnozi(kompleksni a,kompleksni b) {
    kompleksni umnozak;
    umnozak.realni = (a.realni * b.realni) - (a.imaginarni * b.imaginarni);
    umnozak.imaginarni = (a.realni * b.imaginarni) + (a.imaginarni * b.realni);
    return umnozak;
}

float modul(kompleksni a) {
    float modul = sqrt((a.realni * a.realni) + (a.imaginarni * a.imaginarni));
    return modul;
}

int main (void)
{
    kompleksni prvi, drugi, suma;
    prvi.realni=2;
    prvi.imaginarni=3;
    drugi.realni=3;
    drugi.imaginarni=4;

    suma = zbroji(prvi, drugi);
    printf("%f %f", suma.realni, suma.imaginarni);

    return 0;

}
