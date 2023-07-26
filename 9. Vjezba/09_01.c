#include <stdio.h>

typedef struct {
    int sati;
    int minute;
    int sekunde;
} vrijeme;

vrijeme razlika(vrijeme prvo, vrijeme drugo) {
    int sekunde1 = prvo.sati * 3600 + prvo.minute * 60 + prvo.sekunde;
    int sekunde2 = drugo.sati * 3600 + drugo.minute * 60 + drugo.sekunde;
    int razlika;

    if (sekunde1 <= sekunde2)
    {
        razlika = sekunde2 - sekunde1;
    }
    else
    {
        razlika = sekunde1 - sekunde2;
    }

    int sati = razlika / 3600;
    int minute = (razlika % 3600) / 60;
    int sekunde = razlika % 60;
    vrijeme rezultat = { sati, minute, sekunde };
    return rezultat;
}


int main() {
    vrijeme prvo = { 12, 30, 0 };
    vrijeme drugo = { 14, 45, 15 };
    vrijeme razlika_vremena = razlika(prvo, drugo);
     printf("%d:%d:%d\n", razlika_vremena.sati, razlika_vremena.minute, razlika_vremena.sekunde);
    return 0;
}
