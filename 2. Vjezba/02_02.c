#include <stdio.h>

char pretvori (short x)
{
    if (x<0){
        return ':';
    }
    else if (x>128){
        return (char)x;
    }
    else{
        return x%128;
    }
}

int main(void)
{

    do {
        int broj;
        printf("Unesite broj: \n");
        scanf("%d", broj);

    } while;

    return 0;
}
