#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int usporedi(const void* a, const void* b)
{
    char char_a = *((char*)a);
    char char_b = *((char*)b);

    if (char_a < char_b) {
        return -1;
    } else if (char_a > char_b) {
        return 1;
    } else {
        return 0;
    }
}

char* funkcija(char* string)
{
    qsort(string, strlen(string), sizeof(char), usporedi);

    return string;
}

int main(void)
{
    char string []= "acfba";

    printf("%s\n", funkcija(string));

    return 0;
}

