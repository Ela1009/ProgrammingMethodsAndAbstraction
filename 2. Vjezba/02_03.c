#include <stdio.h>

int funkcija_fizzbuzz (int a, int b, int m, int n)
{
    for (int i=a; i<=b; i=i+1)

    {
        if (i%m == 0 && i % n == 0)
            printf("%d FizzBuzz\n", i);

        else if (i % m == 0)
            printf("%d Fizz\n", i);

        else if (i % n == 0)
            printf("%d Buzz\n", i);

        else
            printf("%d\n", i);

    }

}

int main(void)
{
    int a, b, n, m;
    printf("Unesite interval a i b:\n");
    scanf("%d %d", &a, &b);
    printf("Unesite dva cijela broja m i n:\n");
    scanf("%d %d", &m, &n);
    funkcija_fizzbuzz (a, b, m, n);

    return 0;
}


