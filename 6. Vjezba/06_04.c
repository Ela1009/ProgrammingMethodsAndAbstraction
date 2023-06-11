#include <stdio.h>
#include <string.h>

int funkcija_anagrami(char *rijec1, char *rijec2)
 {
    int count[20] = {0};
    int len1 = strlen(rijec1);
    int len2 = strlen(rijec2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        count[rijec1[i]]++;
    }

    for (int i = 0; i < len2; i++) {
        count[rijec2[i]]--;
    }

    for (int i = 0; i < 20; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char rijec1[] = "trava";
    char rijec2[] = "vatra";

    if (funkcija_anagrami(rijec1, rijec2)) {
        printf("da");
    } else {
        printf("ne");
    }

    return 0;
}
