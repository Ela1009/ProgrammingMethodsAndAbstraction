#include <stdio.h>
int main(void)
{
    int x, a, b, c;
    printf("Unesite troznamenkasti broj: \n");
    scanf("%d", &x);
    a=x/100;
    b=(x%100) / 10;
    c=x%10;
    if((a*a*a  + b*b*b + c*c*c) == x)
        printf("da\n");
    else
        printf("ne\n");

    return 0;
}

