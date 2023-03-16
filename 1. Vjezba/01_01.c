#include <stdio.h>
int main(void)
{
    char ch;
    int x,y;
    printf("Unesite dva broja: \n");
    scanf("%d %d", &x, &y);
    printf("Unesite znak: \n");
    scanf(" %c", &ch);
    if (ch == '+')
        printf("%d\n", x + y);
    else if (ch == '-')
        printf("%d\n", x - y);
    else if (ch == '*')
        printf("%d\n", x * y);
    else if (ch == '/' && x % y==0)
        printf("%d\n", x / y);
    else if (ch == '/' && x % y!=0)
        printf("%d ostatak %d\n", x/y, x % y);
    else if (ch == '/' && y==0)
        printf("Zabranjeno je dijeliti s nulom!\n");
    else
        printf("Netocan unos!\n");

    return 0;
}
